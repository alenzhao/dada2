// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dada2.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// dada_uniques
Rcpp::List dada_uniques(std::vector< std::string > seqs, std::vector<int> abundances, Rcpp::NumericMatrix err, Rcpp::NumericMatrix quals, Rcpp::NumericMatrix score, int gap, bool use_kmers, double kdist_cutoff, int band_size, double omegaA, int max_clust, double min_fold, int min_hamming, bool use_quals, int qmax, bool final_consensus, bool vectorized_alignment, bool verbose);
RcppExport SEXP dada2_dada_uniques(SEXP seqsSEXP, SEXP abundancesSEXP, SEXP errSEXP, SEXP qualsSEXP, SEXP scoreSEXP, SEXP gapSEXP, SEXP use_kmersSEXP, SEXP kdist_cutoffSEXP, SEXP band_sizeSEXP, SEXP omegaASEXP, SEXP max_clustSEXP, SEXP min_foldSEXP, SEXP min_hammingSEXP, SEXP use_qualsSEXP, SEXP qmaxSEXP, SEXP final_consensusSEXP, SEXP vectorized_alignmentSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type abundances(abundancesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type err(errSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type quals(qualsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type score(scoreSEXP);
    Rcpp::traits::input_parameter< int >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< bool >::type use_kmers(use_kmersSEXP);
    Rcpp::traits::input_parameter< double >::type kdist_cutoff(kdist_cutoffSEXP);
    Rcpp::traits::input_parameter< int >::type band_size(band_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type omegaA(omegaASEXP);
    Rcpp::traits::input_parameter< int >::type max_clust(max_clustSEXP);
    Rcpp::traits::input_parameter< double >::type min_fold(min_foldSEXP);
    Rcpp::traits::input_parameter< int >::type min_hamming(min_hammingSEXP);
    Rcpp::traits::input_parameter< bool >::type use_quals(use_qualsSEXP);
    Rcpp::traits::input_parameter< int >::type qmax(qmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type final_consensus(final_consensusSEXP);
    Rcpp::traits::input_parameter< bool >::type vectorized_alignment(vectorized_alignmentSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(dada_uniques(seqs, abundances, err, quals, score, gap, use_kmers, kdist_cutoff, band_size, omegaA, max_clust, min_fold, min_hamming, use_quals, qmax, final_consensus, vectorized_alignment, verbose));
    return __result;
END_RCPP
}
// C_nwalign
Rcpp::CharacterVector C_nwalign(std::string s1, std::string s2, Rcpp::NumericMatrix score, int gap_p, int band, bool endsfree);
RcppExport SEXP dada2_C_nwalign(SEXP s1SEXP, SEXP s2SEXP, SEXP scoreSEXP, SEXP gap_pSEXP, SEXP bandSEXP, SEXP endsfreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type score(scoreSEXP);
    Rcpp::traits::input_parameter< int >::type gap_p(gap_pSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type endsfree(endsfreeSEXP);
    __result = Rcpp::wrap(C_nwalign(s1, s2, score, gap_p, band, endsfree));
    return __result;
END_RCPP
}
// C_eval_pair
Rcpp::IntegerVector C_eval_pair(std::string s1, std::string s2);
RcppExport SEXP dada2_C_eval_pair(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    __result = Rcpp::wrap(C_eval_pair(s1, s2));
    return __result;
END_RCPP
}
// C_get_overlaps
Rcpp::IntegerVector C_get_overlaps(std::string s1, std::string s2, int allow, int max_shift);
RcppExport SEXP dada2_C_get_overlaps(SEXP s1SEXP, SEXP s2SEXP, SEXP allowSEXP, SEXP max_shiftSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type allow(allowSEXP);
    Rcpp::traits::input_parameter< int >::type max_shift(max_shiftSEXP);
    __result = Rcpp::wrap(C_get_overlaps(s1, s2, allow, max_shift));
    return __result;
END_RCPP
}
// C_pair_consensus
Rcpp::CharacterVector C_pair_consensus(std::string s1, std::string s2, int prefer);
RcppExport SEXP dada2_C_pair_consensus(SEXP s1SEXP, SEXP s2SEXP, SEXP preferSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type prefer(preferSEXP);
    __result = Rcpp::wrap(C_pair_consensus(s1, s2, prefer));
    return __result;
END_RCPP
}
// C_check_ACGT
Rcpp::LogicalVector C_check_ACGT(std::vector<std::string> seqs);
RcppExport SEXP dada2_C_check_ACGT(SEXP seqsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type seqs(seqsSEXP);
    __result = Rcpp::wrap(C_check_ACGT(seqs));
    return __result;
END_RCPP
}
// evaluate_kmers
Rcpp::DataFrame evaluate_kmers(std::vector< std::string > seqs, int kmer_size, Rcpp::NumericMatrix score, int gap, int band, unsigned int max_aligns);
RcppExport SEXP dada2_evaluate_kmers(SEXP seqsSEXP, SEXP kmer_sizeSEXP, SEXP scoreSEXP, SEXP gapSEXP, SEXP bandSEXP, SEXP max_alignsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< int >::type kmer_size(kmer_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type score(scoreSEXP);
    Rcpp::traits::input_parameter< int >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type max_aligns(max_alignsSEXP);
    __result = Rcpp::wrap(evaluate_kmers(seqs, kmer_size, score, gap, band, max_aligns));
    return __result;
END_RCPP
}
// C_subpos
Rcpp::DataFrame C_subpos(std::string s1, std::string s2);
RcppExport SEXP dada2_C_subpos(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    __result = Rcpp::wrap(C_subpos(s1, s2));
    return __result;
END_RCPP
}
// C_nwvec
Rcpp::CharacterVector C_nwvec(std::string s1, std::string s2, int16_t match, int16_t mismatch, int16_t gap_p, int band);
RcppExport SEXP dada2_C_nwvec(SEXP s1SEXP, SEXP s2SEXP, SEXP matchSEXP, SEXP mismatchSEXP, SEXP gap_pSEXP, SEXP bandSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int16_t >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int16_t >::type mismatch(mismatchSEXP);
    Rcpp::traits::input_parameter< int16_t >::type gap_p(gap_pSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    __result = Rcpp::wrap(C_nwvec(s1, s2, match, mismatch, gap_p, band));
    return __result;
END_RCPP
}
// C_taxify
Rcpp::CharacterVector C_taxify(std::string seq, std::vector<std::string> refs, std::vector<std::string> taxs);
RcppExport SEXP dada2_C_taxify(SEXP seqSEXP, SEXP refsSEXP, SEXP taxsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type refs(refsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type taxs(taxsSEXP);
    __result = Rcpp::wrap(C_taxify(seq, refs, taxs));
    return __result;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int dada2_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP dada2_RcppExport_registerCCallable() { 
    R_RegisterCCallable("dada2", "dada2_RcppExport_validate", (DL_FUNC)dada2_RcppExport_validate);
    return R_NilValue;
}
