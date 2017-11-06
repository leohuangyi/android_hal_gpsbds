/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FrequencyInfoFDD_H_
#define	_FrequencyInfoFDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UARFCN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FrequencyInfoFDD */
typedef struct FrequencyInfoFDD {
	UARFCN_t	*uarfcn_UL	/* OPTIONAL */;
	UARFCN_t	 uarfcn_DL;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FrequencyInfoFDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FrequencyInfoFDD;

#ifdef __cplusplus
}
#endif

#endif	/* _FrequencyInfoFDD_H_ */
#include <asn_internal.h>
