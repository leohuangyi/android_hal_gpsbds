/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "GNSSPosTechnology.h"

static asn_TYPE_member_t asn_MBR_GNSSPosTechnology_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GNSSPosTechnology, gps),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gps"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GNSSPosTechnology, galileo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"galileo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GNSSPosTechnology, sbas),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sbas"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GNSSPosTechnology, modernized_gps),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modernized-gps"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GNSSPosTechnology, qzss),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"qzss"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GNSSPosTechnology, glonass),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"glonass"
		},
};
static const ber_tlv_tag_t asn_DEF_GNSSPosTechnology_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSSPosTechnology_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gps */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* galileo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sbas */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* modernized-gps */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* qzss */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* glonass */
};
static asn_SEQUENCE_specifics_t asn_SPC_GNSSPosTechnology_specs_1 = {
	sizeof(struct GNSSPosTechnology),
	offsetof(struct GNSSPosTechnology, _asn_ctx),
	asn_MAP_GNSSPosTechnology_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GNSSPosTechnology = {
	"GNSSPosTechnology",
	"GNSSPosTechnology",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GNSSPosTechnology_tags_1,
	sizeof(asn_DEF_GNSSPosTechnology_tags_1)
		/sizeof(asn_DEF_GNSSPosTechnology_tags_1[0]), /* 1 */
	asn_DEF_GNSSPosTechnology_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSSPosTechnology_tags_1)
		/sizeof(asn_DEF_GNSSPosTechnology_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GNSSPosTechnology_1,
	6,	/* Elements count */
	&asn_SPC_GNSSPosTechnology_specs_1	/* Additional specs */
};

