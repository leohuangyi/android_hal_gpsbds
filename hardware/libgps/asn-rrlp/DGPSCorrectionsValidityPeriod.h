/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_DGPSCorrectionsValidityPeriod_H_
#define	_DGPSCorrectionsValidityPeriod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DGPSExtensionSatElement;

/* DGPSCorrectionsValidityPeriod */
typedef struct DGPSCorrectionsValidityPeriod {
	A_SEQUENCE_OF(struct DGPSExtensionSatElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DGPSCorrectionsValidityPeriod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DGPSCorrectionsValidityPeriod;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DGPSExtensionSatElement.h"

#endif	/* _DGPSCorrectionsValidityPeriod_H_ */
#include <asn_internal.h>
