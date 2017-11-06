/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-REPORT"
 * 	found in "../supl-report.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SessionList_H_
#define	_SessionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SessionInformation;

/* SessionList */
typedef struct SessionList {
	A_SEQUENCE_OF(struct SessionInformation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SessionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SessionList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SessionInformation.h"

#endif	/* _SessionList_H_ */
#include <asn_internal.h>
