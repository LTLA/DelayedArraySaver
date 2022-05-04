#ifndef CHIHAYA_EXTERNAL_HDF5_HPP
#define CHIHAYA_EXTERNAL_HDF5_HPP

#include "minimal_array.hpp"

/**
 * @file external_array.hpp
 *
 * @brief Validation for external arrays.
 */

namespace chihaya {

/**
 * Validate a reference to an external HDF5 file containing an array.
 *
 * @param handle An open handle on a HDF5 group representing an external HDF5 array.
 * @param name Name of the group inside the file.
 *
 * @return Details of the external HDF5 array.
 * Otherwise, if the validation failed, an error is raised.
 *
 * Each external array is represented as a HDF5 group with the following attributes:
 *
 * - `delayed_type` should be a scalar string `"array"`.
 * - `delayed_array` should be any scalar string that starts with `"external "` (note the space).
 *
 * Inside the group, we expect:
 *
 * - `dimensions`, a 1-dimensional integer dataset. 
 *   This stores the dimensionality of the external array and should only contain non-negative values.
 * - `type`, a scalar string specifying the type.
 *   This should be one of `BOOLEAN`, `INTEGER`, `FLOAT` or `STRING`.
 * - `file`, a scalar string containing the path to the external HDF5 file.
 *   This may be an absolute or relative path.
 * - `name`, a scalar string containing the name of the dataset or group inside `file` corresponding to the array/matrix. 
 * 
 * This will not check that `file` actually exists with the specified `name` entry.
 */
inline ArrayDetails validate_external_hdf5(const H5::Group& handle, const std::string& name) {
    auto msg = []() -> std::string { return std::string("an external HDF5 array"); };
    auto deets = validate_minimal(handle, name, msg);

    {
        if (!handle.exists("file") || handle.childObjType("file") != H5O_TYPE_DATASET) {
            throw std::runtime_error("expected 'file' dataset for " + msg());
        }

        auto thandle = handle.openDataSet("file");
        if (thandle.getSpace().getSimpleExtentNdims() != 0 || thandle.getTypeClass() != H5T_STRING) {
            throw std::runtime_error("'file' should be a string scalar for " + msg());
        }
    }

    {
        if (!handle.exists("name") || handle.childObjType("name") != H5O_TYPE_DATASET) {
            throw std::runtime_error("expected 'name' dataset for " + msg());
        }

        auto thandle = handle.openDataSet("name");
        if (thandle.getSpace().getSimpleExtentNdims() != 0 || thandle.getTypeClass() != H5T_STRING) {
            throw std::runtime_error("'name' should be a string scalar for " + msg());
        }
    }

    return deets;
}

}

#endif
