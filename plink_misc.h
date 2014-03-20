#ifndef __PLINK_MISC_H__
#define __PLINK_MISC_H__

#include "plink_common.h"

#define SCORE_HEADER 1
#define SCORE_SUM 2
#define SCORE_NO_MEAN_IMPUTATION 4
#define SCORE_CENTER 8
#define SCORE_DATA_HEADER 0x10

typedef struct {
  char* fname;
  char* range_fname;
  char* data_fname;
  uint32_t modifier;
  uint32_t varid_col;
  uint32_t allele_col;
  uint32_t effect_col;
  uint32_t data_varid_col;
  uint32_t data_col;
} Score_info;

void misc_init(Score_info* sc_ip);

void misc_cleanup(Score_info* sc_ip);

int32_t score_report(Score_info* sc_ip, FILE* bedfile, uintptr_t bed_offset, uintptr_t marker_ct, uintptr_t unfiltered_marker_ct, uintptr_t* marker_exclude_orig, uintptr_t* marker_reverse, char* marker_ids, uintptr_t max_marker_id_len, char** marker_allele_ptrs, double* set_allele_freqs, uintptr_t indiv_ct, uintptr_t unfiltered_indiv_ct, uintptr_t* indiv_exclude, char* person_ids, uint32_t plink_maxfid, uint32_t plink_maxiid, uintptr_t max_person_id_len, uintptr_t* sex_male, uintptr_t* pheno_nm, uintptr_t* pheno_c, double* pheno_d, int32_t missing_pheno, uint32_t missing_pheno_len, uint32_t hh_exists, Chrom_info* chrom_info_ptr, char* outname, char* outname_end);

#endif // __PLINK_MISC_H__