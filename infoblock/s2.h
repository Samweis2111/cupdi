#ifndef __IB_S2_H
#define __IB_S2_H

#define INFO_BLOCK_S2_VER_MAJOR 's'
#define INFO_BLOCK_S2_VER_MINOR '2'
#define INFO_BLOCK_S2_VERSION L8_TO_LT16(INFO_BLOCK_S2_VER_MAJOR, INFO_BLOCK_S2_VER_MINOR)

int create_information_block_s2(/*information_container_t*/void *info_ptr, int fw_crc24, int fw_size, int fw_version, int dsdr_addr);
int set_information_block_ptr_s2(/*information_container_t*/void *info_ptr, char *data, int len, int flag);
int infomation_block_size_s2(void);
void destory_information_block_s2(void *info_ptr);

#endif