/*
 * fnt_l9_6x6.c - a font in standard format
 *
 * Automatically generated by fntconv.c
 */

#include "portab.h"
#include "font.h"

static UWORD off_table[], dat_table[];

const struct font_head fnt_l9_6x6 = {
    1,  /* font_id */
    8,  /* point */
    "6x6 system font",  /* BYTE name[32] */
    0,  /* first_ade */
    255,  /* last_ade */
    4,  /* top */
    4,  /* ascent */
    3,  /* half */
    1,  /* descent */
    1,  /* bottom */
    5,  /* max_char_width */
    6,  /* max_cell_width */
    0,  /* left_offset */
    3,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555,  /* lighten */
    0xaaaa,  /* skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* flags */
    0,  /* hor_table */
    off_table,  /* off_table */
    dat_table,  /* dat_table */
    168,  /* form_width */
    6,  /* form_height */
    0,  /* struct font * next_font */
    0   /* UWORD next_seg */
};

static UWORD off_table[] =
{
    0x0000, 0x0006, 0x000c, 0x0012, 0x0018, 0x001e, 0x0024, 0x002a, 
    0x0030, 0x0036, 0x003c, 0x0042, 0x0048, 0x004e, 0x0054, 0x005a, 
    0x0060, 0x0066, 0x006c, 0x0072, 0x0078, 0x007e, 0x0084, 0x008a, 
    0x0090, 0x0096, 0x009c, 0x00a2, 0x00a8, 0x00ae, 0x00b4, 0x00ba, 
    0x00c0, 0x00c6, 0x00cc, 0x00d2, 0x00d8, 0x00de, 0x00e4, 0x00ea, 
    0x00f0, 0x00f6, 0x00fc, 0x0102, 0x0108, 0x010e, 0x0114, 0x011a, 
    0x0120, 0x0126, 0x012c, 0x0132, 0x0138, 0x013e, 0x0144, 0x014a, 
    0x0150, 0x0156, 0x015c, 0x0162, 0x0168, 0x016e, 0x0174, 0x017a, 
    0x0180, 0x0186, 0x018c, 0x0192, 0x0198, 0x019e, 0x01a4, 0x01aa, 
    0x01b0, 0x01b6, 0x01bc, 0x01c2, 0x01c8, 0x01ce, 0x01d4, 0x01da, 
    0x01e0, 0x01e6, 0x01ec, 0x01f2, 0x01f8, 0x01fe, 0x0204, 0x020a, 
    0x0210, 0x0216, 0x021c, 0x0222, 0x0228, 0x022e, 0x0234, 0x023a, 
    0x0240, 0x0246, 0x024c, 0x0252, 0x0258, 0x025e, 0x0264, 0x026a, 
    0x0270, 0x0276, 0x027c, 0x0282, 0x0288, 0x028e, 0x0294, 0x029a, 
    0x02a0, 0x02a6, 0x02ac, 0x02b2, 0x02b8, 0x02be, 0x02c4, 0x02ca, 
    0x02d0, 0x02d6, 0x02dc, 0x02e2, 0x02e8, 0x02ee, 0x02f4, 0x02fa, 
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
    0x0300, 0x0306, 0x030c, 0x0312, 0x0318, 0x031e, 0x0324, 0x032a, 
    0x0330, 0x0336, 0x033c, 0x0342, 0x0348, 0x034e, 0x0354, 0x035a, 
    0x0360, 0x0366, 0x036c, 0x0372, 0x0378, 0x037e, 0x0384, 0x038a, 
    0x0390, 0x0396, 0x039c, 0x03a2, 0x03a8, 0x03ae, 0x03b4, 0x03ba, 
    0x03c0, 0x03c6, 0x03cc, 0x03d2, 0x03d8, 0x03de, 0x03e4, 0x03ea, 
    0x03f0, 0x03f6, 0x03fc, 0x0402, 0x0408, 0x040e, 0x0414, 0x041a, 
    0x0420, 0x0426, 0x042c, 0x0432, 0x0438, 0x043e, 0x0444, 0x044a, 
    0x0450, 0x0456, 0x045c, 0x0462, 0x0468, 0x046e, 0x0474, 0x047a, 
    0x0480, 0x0486, 0x048c, 0x0492, 0x0498, 0x049e, 0x04a4, 0x04aa, 
    0x04b0, 0x04b6, 0x04bc, 0x04c2, 0x04c8, 0x04ce, 0x04d4, 0x04da, 
    0x04e0, 0x04e6, 0x04ec, 0x04f2, 0x04f8, 0x04fe, 0x0504, 0x050a, 
    0x0510, 0x0516, 0x051c, 0x0522, 0x0528, 0x052e, 0x0534, 0x053a, 
    0x0540, 
};

static UWORD dat_table[] =
{
    0x0082, 0x0421, 0xcfb6, 0x0de3, 0x04e3, 0x8150, 0xf987, 0xbcc3, 
    0xcc3e, 0x73e0, 0x381f, 0x8442, 0x00cd, 0x947b, 0x260c, 0x3184, 
    0x8800, 0x0006, 0x704f, 0x3c33, 0xc73e, 0x71c3, 0x0c18, 0x061c, 
    0x71cf, 0x1ef3, 0xef9e, 0x89c0, 0x9242, 0x289c, 0xf1cf, 0x1efa, 
    0x28a2, 0x8a2f, 0x9ec1, 0xe200, 0x6008, 0x0008, 0x0180, 0x8001, 
    0x2060, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0e31, 0xc400, 
    0x00c2, 0x063a, 0x228c, 0x29e7, 0x0d00, 0x07be, 0x3087, 0x1c50, 
    0x0680, 0x50c7, 0x2c78, 0x0518, 0x2101, 0x1a20, 0x879e, 0x4042, 
    0x1440, 0x4214, 0x71e4, 0x0421, 0xa522, 0x3501, 0x0850, 0x441c, 
    0x4042, 0x1a50, 0x8000, 0x4042, 0x1440, 0x4214, 0x5bc4, 0x0421, 
    0xa508, 0x0901, 0x0850, 0x4014, 0x01c2, 0x0662, 0xaf2a, 0x1a17, 
    0x8682, 0x0150, 0xc880, 0x84c2, 0x0c02, 0x5367, 0x203f, 0x42f4, 
    0x00cd, 0xbea3, 0x4d0c, 0x60c3, 0x0800, 0x000c, 0x98c0, 0x8252, 
    0x0802, 0x8a23, 0x0c31, 0xe326, 0x8a28, 0xa08a, 0x0820, 0x8880, 
    0x9443, 0x6ca2, 0x8a28, 0xa022, 0x28a2, 0x5221, 0x1860, 0x6700, 
    0x61cf, 0x1c79, 0xc21e, 0xb181, 0x2421, 0x4f1c, 0xf1e7, 0x0e72, 
    0x28a2, 0x4a27, 0x8c30, 0xce88, 0x0007, 0x0843, 0x610a, 0x1330, 
    0x9b00, 0x08c0, 0x4be1, 0x8c21, 0xae80, 0x21c8, 0xb6b1, 0xc000, 
    0x0082, 0x2c50, 0x0a20, 0x2085, 0x0020, 0x8500, 0x4802, 0x0852, 
    0xc014, 0x4882, 0x1400, 0x8736, 0x2085, 0x2c00, 0x0f1e, 0x2085, 
    0x0020, 0x8500, 0x2002, 0x0852, 0xc000, 0x3082, 0x1400, 0x8400, 
    0x0362, 0x3bdf, 0x6e1c, 0xb297, 0x84de, 0xe150, 0xc88f, 0xbec3, 
    0xef8e, 0x7320, 0xb760, 0x6294, 0x00c9, 0x1470, 0x8618, 0x60c7, 
    0xbe01, 0xe018, 0xa847, 0x1c93, 0xcf04, 0x71e0, 0x0060, 0x018c, 
    0xbbef, 0x208b, 0xcf26, 0xf880, 0x9842, 0xaaa2, 0xf22f, 0x1c22, 
    0x28aa, 0x2142, 0x1830, 0x6d80, 0x3028, 0xa08b, 0xe7a2, 0xc881, 
    0x3823, 0xe8a2, 0x8a24, 0x9822, 0x28aa, 0x3221, 0x1830, 0x6b9c, 
    0x00c8, 0x1cf9, 0xc39c, 0x3adf, 0xb679, 0xcb40, 0x3083, 0x0479, 
    0xae8c, 0x78c8, 0x9bba, 0xe898, 0x71c7, 0x1c71, 0xcfa0, 0xfbef, 
    0xbe71, 0xc71c, 0xe927, 0x1c71, 0xc708, 0x5a28, 0xa28a, 0x24bc, 
    0x71c7, 0x1c71, 0xc3a0, 0x71c7, 0x1c61, 0x8618, 0xd3c7, 0x1c71, 
    0xc73e, 0x5a28, 0xa28a, 0x2722, 0x008d, 0x8662, 0xacaa, 0xe2df, 
    0xdc93, 0xa358, 0xd9cc, 0x06d8, 0x698c, 0xdbef, 0xa440, 0x2168, 
    0x00c0, 0x3e29, 0x6e80, 0x60c3, 0x0830, 0x0330, 0xc848, 0x02f8, 
    0x2888, 0x8823, 0x0c31, 0xe30c, 0xb228, 0xa08a, 0x0822, 0x8888, 
    0x9442, 0x29a2, 0x822a, 0x0222, 0x2536, 0x5084, 0x1818, 0x6000, 
    0x03e8, 0xa08a, 0x021e, 0x8881, 0x2422, 0xa8a2, 0x8a24, 0x0622, 
    0x252a, 0x31e2, 0x0c30, 0xc132, 0x00c8, 0x08f0, 0x861c, 0x62f7, 
    0x9b08, 0x08c0, 0x0007, 0x9c11, 0xa68c, 0x11e7, 0x36b2, 0x8718, 
    0x8a28, 0xa28a, 0x2a20, 0xe38e, 0x3820, 0x8208, 0x49a8, 0xa28a, 
    0x2894, 0x6a28, 0xa289, 0xc736, 0x0820, 0x8208, 0x2e20, 0xfbef, 
    0xbe20, 0x8208, 0x3a28, 0xa28a, 0x2880, 0x6a28, 0xa289, 0xe49e, 
    0x0087, 0x0421, 0xc9b6, 0x4210, 0x3c18, 0xe75c, 0xd9cc, 0x06f8, 
    0x6d8c, 0xd867, 0x3c71, 0xeef0, 0x0000, 0x14f2, 0x6d00, 0x3184, 
    0x8830, 0x0320, 0x704f, 0xbc13, 0xc708, 0x71c3, 0x0418, 0x0600, 
    0x822f, 0x1ef3, 0xe81e, 0x89c7, 0x127a, 0x289c, 0x81c9, 0xbc21, 
    0xe222, 0x888f, 0x9e09, 0xe000, 0x01ef, 0x1c79, 0xc202, 0x89c1, 
    0x2272, 0x289c, 0xf1e4, 0x1c11, 0xe236, 0x4827, 0x8e31, 0xc03e, 
    0x00c7, 0x1e41, 0xc1a8, 0x1b10, 0x0d08, 0x0a40, 0x03e0, 0x0021, 
    0xf280, 0x2000, 0x2c79, 0xe232, 0xfbef, 0xbefb, 0xeb9e, 0x8208, 
    0x2020, 0x8208, 0x7168, 0xa28a, 0x28a2, 0x4a28, 0xa288, 0x843c, 
    0xfbef, 0xbefb, 0xe79e, 0x8208, 0x2020, 0x8208, 0x4a28, 0xa28a, 
    0x2888, 0x3228, 0xa288, 0x2702, 0x0082, 0x0000, 0x0000, 0x01e3, 
    0x1810, 0xb64c, 0xf9cf, 0xbe1b, 0xef8c, 0xf860, 0x0758, 0xac00, 
    0x00c0, 0x0020, 0x0680, 0x0000, 0x0060, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0800, 0x000c, 0x7800, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0060, 0x0000, 0x0000, 0x0000, 0x0000, 0x003e, 
    0x0000, 0x0000, 0x003c, 0x000e, 0x0000, 0x0000, 0x8020, 0x0000, 
    0x0000, 0x03c0, 0x0030, 0x0000, 0x00c2, 0x0038, 0x8718, 0x71ef, 
    0x8000, 0x0780, 0x0000, 0x007b, 0x0280, 0x780f, 0x8000, 0x021c, 
    0x8a28, 0xa28a, 0x2030, 0xfbef, 0xbe71, 0xc71c, 0x0127, 0x1c71, 
    0xc700, 0xb1c7, 0x1c70, 0x8430, 0x79e7, 0x9e79, 0xe038, 0x71c7, 
    0x1c71, 0xc71c, 0x3227, 0x1c71, 0xc700, 0x41e7, 0x9e79, 0xc41c, 
    
};
