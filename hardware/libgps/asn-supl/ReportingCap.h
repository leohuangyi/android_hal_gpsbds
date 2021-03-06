/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_ReportingCap_H_
#define	_ReportingCap_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "RepMode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BatchRepCap;

/* ReportingCap */
typedef struct ReportingCap {
	long	 minInt;
	long	*maxInt	/* OPTIONAL */;
	RepMode_t	 repMode;
	struct BatchRepCap	*batchRepCap	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportingCap_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportingCap;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BatchRepCap.h"

#endif	/* _ReportingCap_H_ */
#include <asn_internal.h>
