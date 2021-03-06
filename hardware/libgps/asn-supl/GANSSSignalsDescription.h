/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-REPORT"
 * 	found in "../supl-report.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_GANSSSignalsDescription_H_
#define	_GANSSSignalsDescription_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "GANSSSignals.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSSignalsDescription */
typedef struct GANSSSignalsDescription {
	long	 ganssId;
	GANSSSignals_t	 gANSSSignals;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSSignalsDescription_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSSignalsDescription;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSSignalsDescription_H_ */
#include <asn_internal.h>
