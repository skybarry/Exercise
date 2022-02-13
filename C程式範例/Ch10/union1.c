#include <stdio.h>

typedef  unsigned char u8;
typedef  unsigned short  u16;
typedef  unsigned int u32;

#define swap16(a) (((a)>>8) |((a) << 8))

typedef union  {
    u8 * p8;
    u16 * p16;
    u32 * p32;
}Pixel;

Pixel get_pixel(u32 *map, int bpp, int pos);

int main()
{

    u8 map[]={0x11,0x22,0x33,0x44,0x55,0x66,0x77,0x88,
           0x99,0xAA,0xBB,0xCC,0xDD,0xEE,0xFF};

    get_pixel(map,1,2);
    get_pixel(map,2,2);
    get_pixel(map,4,2);


    getchar();
    return 0;

}

Pixel get_pixel(u32 *map, int bpp, int pos)
{
    Pixel pixel;

    switch (bpp)
    {
        case 1:
            pixel.p8=(u8 *)map;
            printf("%#x\n",pixel.p8[pos]);
            break;


        case 2:
            pixel.p16=(u16 *)map;
            printf("%#hx\n",pixel.p16[pos]);
            printf("after swap: %#hx\n",swap16(pixel.p16[pos]));
            break;


        case 3:
        case 4:

            pixel.p32=(u32 *)map;
            printf("%#x\n",pixel.p32[pos]);
            break;

    }

    return pixel;
}
