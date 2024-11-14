/* Generated by Cython 3.0.11 */

#ifndef __PYX_HAVE__pyarrow__lib
#define __PYX_HAVE__pyarrow__lib

#include "Python.h"

#ifndef __PYX_HAVE_API__pyarrow__lib

#ifdef CYTHON_EXTERN_C
    #undef __PYX_EXTERN_C
    #define __PYX_EXTERN_C CYTHON_EXTERN_C
#elif defined(__PYX_EXTERN_C)
    #ifdef _MSC_VER
    #pragma message ("Please do not define the '__PYX_EXTERN_C' macro externally. Use 'CYTHON_EXTERN_C' instead.")
    #else
    #warning Please do not define the '__PYX_EXTERN_C' macro externally. Use 'CYTHON_EXTERN_C' instead.
    #endif
#else
    #define __PYX_EXTERN_C extern "C++"
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C PyObject *pyarrow_wrap_buffer(std::shared_ptr< arrow::Buffer>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_resizable_buffer(std::shared_ptr< arrow::ResizableBuffer>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_data_type(std::shared_ptr< arrow::DataType>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_field(std::shared_ptr< arrow::Field>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_schema(std::shared_ptr< arrow::Schema>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_scalar(std::shared_ptr< arrow::Scalar>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_array(std::shared_ptr< arrow::Array>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_chunked_array(std::shared_ptr< arrow::ChunkedArray>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_sparse_coo_tensor(std::shared_ptr< arrow::SparseCOOTensor>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_sparse_csc_matrix(std::shared_ptr< arrow::SparseCSCMatrix>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_sparse_csf_tensor(std::shared_ptr< arrow::SparseCSFTensor>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_sparse_csr_matrix(std::shared_ptr< arrow::SparseCSRMatrix>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_tensor(std::shared_ptr< arrow::Tensor>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_batch(std::shared_ptr< arrow::RecordBatch>  const &);
__PYX_EXTERN_C PyObject *pyarrow_wrap_table(std::shared_ptr< arrow::Table>  const &);
__PYX_EXTERN_C std::shared_ptr< arrow::Buffer>  pyarrow_unwrap_buffer(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::DataType>  pyarrow_unwrap_data_type(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::Field>  pyarrow_unwrap_field(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::Schema>  pyarrow_unwrap_schema(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::Scalar>  pyarrow_unwrap_scalar(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::Array>  pyarrow_unwrap_array(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::ChunkedArray>  pyarrow_unwrap_chunked_array(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::SparseCOOTensor>  pyarrow_unwrap_sparse_coo_tensor(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::SparseCSCMatrix>  pyarrow_unwrap_sparse_csc_matrix(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::SparseCSFTensor>  pyarrow_unwrap_sparse_csf_tensor(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::SparseCSRMatrix>  pyarrow_unwrap_sparse_csr_matrix(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::Tensor>  pyarrow_unwrap_tensor(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::RecordBatch>  pyarrow_unwrap_batch(PyObject *);
__PYX_EXTERN_C std::shared_ptr< arrow::Table>  pyarrow_unwrap_table(PyObject *);

#endif /* !__PYX_HAVE_API__pyarrow__lib */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initlib(void);
#else
/* WARNING: Use PyImport_AppendInittab("lib", PyInit_lib) instead of calling PyInit_lib directly from Python 3.5 */
PyMODINIT_FUNC PyInit_lib(void);

#if PY_VERSION_HEX >= 0x03050000 && (defined(__GNUC__) || defined(__clang__) || defined(_MSC_VER) || (defined(__cplusplus) && __cplusplus >= 201402L))
#if defined(__cplusplus) && __cplusplus >= 201402L
[[deprecated("Use PyImport_AppendInittab(\"lib\", PyInit_lib) instead of calling PyInit_lib directly.")]] inline
#elif defined(__GNUC__) || defined(__clang__)
__attribute__ ((__deprecated__("Use PyImport_AppendInittab(\"lib\", PyInit_lib) instead of calling PyInit_lib directly."), __unused__)) __inline__
#elif defined(_MSC_VER)
__declspec(deprecated("Use PyImport_AppendInittab(\"lib\", PyInit_lib) instead of calling PyInit_lib directly.")) __inline
#endif
static PyObject* __PYX_WARN_IF_PyInit_lib_INIT_CALLED(PyObject* res) {
  return res;
}
#define PyInit_lib() __PYX_WARN_IF_PyInit_lib_INIT_CALLED(PyInit_lib())
#endif
#endif

#endif /* !__PYX_HAVE__pyarrow__lib */
