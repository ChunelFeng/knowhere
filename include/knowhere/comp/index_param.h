// Copyright (C) 2019-2023 Zilliz. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied. See the License for the specific language governing permissions and limitations under the License.

#pragma once

#include <string>

namespace knowhere {

using IndexType = std::string;

namespace IndexEnum {

constexpr const char* INVALID = "";

constexpr const char* INDEX_FAISS_BIN_IDMAP = "BIN_FLAT";
constexpr const char* INDEX_FAISS_BIN_IVFFLAT = "BIN_IVF_FLAT";

constexpr const char* INDEX_FAISS_IDMAP = "FLAT";
constexpr const char* INDEX_FAISS_IVFFLAT = "IVF_FLAT";
constexpr const char* INDEX_FAISS_IVFPQ = "IVF_PQ";
constexpr const char* INDEX_FAISS_IVFSQ8 = "IVF_SQ8";

constexpr const char* INDEX_ANNOY = "ANNOY";
constexpr const char* INDEX_HNSW = "HNSW";

constexpr const char* INDEX_DISKANN = "DISKANN";

}  // namespace IndexEnum

enum class IndexMode { MODE_CPU = 0, MODE_GPU = 1 };

namespace meta {
constexpr const char* METRIC_TYPE = "metric_type";
constexpr const char* DIM = "dim";
constexpr const char* TENSOR = "tensor";
constexpr const char* ROWS = "rows";
constexpr const char* IDS = "ids";
constexpr const char* DISTANCE = "distance";
constexpr const char* LIMS = "lims";
constexpr const char* TOPK = "k";
constexpr const char* RADIUS = "radius";
constexpr const char* RANGE_FILTER = "range_filter";
constexpr const char* INPUT_IDS = "input_ids";
constexpr const char* OUTPUT_TENSOR = "output_tensor";
constexpr const char* DEVICE_ID = "gpu_id";
constexpr const char* BUILD_INDEX_OMP_NUM = "build_index_omp_num";
constexpr const char* QUERY_OMP_NUM = "query_omp_num";
constexpr const char* TRACE_VISIT = "trace_visit";
constexpr const char* JSON_INFO = "json_info";
constexpr const char* JSON_ID_SET = "json_id_set";
};  // namespace meta

namespace indexparam {
// IVF Params
constexpr const char* NPROBE = "nprobe";
constexpr const char* NLIST = "nlist";
constexpr const char* NBITS = "nbits";  // PQ/SQ
constexpr const char* M = "m";          // PQ param for IVFPQ
// HNSW Params
constexpr const char* EFCONSTRUCTION = "efConstruction";
constexpr const char* HNSW_M = "M";
constexpr const char* EF = "ef";
constexpr const char* OVERVIEW_LEVELS = "overview_levels";
// Annoy Params
constexpr const char* N_TREES = "n_trees";
constexpr const char* SEARCH_K = "search_k";
}  // namespace indexparam

using MetricType = std::string;

namespace metric {
constexpr const char* IP = "IP";
constexpr const char* L2 = "L2";
constexpr const char* HAMMING = "HAMMING";
constexpr const char* JACCARD = "JACCARD";
constexpr const char* TANIMOTO = "TANIMOTO";
constexpr const char* SUBSTRUCTURE = "SUBSTRUCTURE";
constexpr const char* SUPERSTRUCTURE = "SUPERSTRUCTURE";
}  // namespace metric

}  // namespace knowhere
