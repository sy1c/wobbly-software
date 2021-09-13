/* 
 * File:   imu.h
 * Author: matts
 *
 * Created on August 9, 2021, 10:27 PM
 */

#define LSM6DS33_ADDRESS_W 0b11010110
#define LSM6DS33_ADDRESS_R 0b11010111
#define LSM6DS33_CTRL1_XL 0x10
#define LSM6DS33_CTRL2_G 0x11
#define LSM6DS33_CTRL9_XL 0x18
#define LSM6DS33_CTRL10_C 0x19
#define LSM6DS33_OUTX_L_G 0x22
#define LSM6DS33_OUTX_H_G 0x23
#define LSM6DS33_OUTY_L_G 0x24
#define LSM6DS33_OUTY_H_G 0x25
#define LSM6DS33_OUTZ_L_G 0x26
#define LSM6DS33_OUTZ_H_G 0x27
#define LSM6DS33_OUTX_L_XL 0x28
#define LSM6DS33_OUTX_H_XL 0x29
#define LSM6DS33_OUTY_L_XL 0x2A
#define LSM6DS33_OUTY_H_XL 0x2B
#define LSM6DS33_OUTZ_L_XL 0x2C
#define LSM6DS33_OUTZ_H_XL 0x2D
#define LSM6DS33_WHO_AM_I 0x0F

void imu_init(void);
int16_t imu_receive(uint8_t reg);