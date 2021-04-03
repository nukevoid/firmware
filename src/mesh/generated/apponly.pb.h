/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_APPONLY_PB_H_INCLUDED
#define PB_APPONLY_PB_H_INCLUDED
#include <pb.h>
#include "channel.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _ChannelSet {
    pb_callback_t settings;
} ChannelSet;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define ChannelSet_init_default                  {{{NULL}, NULL}}
#define ChannelSet_init_zero                     {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define ChannelSet_settings_tag                  1

/* Struct field encoding specification for nanopb */
#define ChannelSet_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  settings,          1)
#define ChannelSet_CALLBACK pb_default_field_callback
#define ChannelSet_DEFAULT NULL
#define ChannelSet_settings_MSGTYPE ChannelSettings

extern const pb_msgdesc_t ChannelSet_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define ChannelSet_fields &ChannelSet_msg

/* Maximum encoded size of messages (where known) */
/* ChannelSet_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
