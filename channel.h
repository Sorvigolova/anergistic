// Copyright 2010 fail0verflow <master@fail0verflow.com>
// Licensed under the terms of the GNU GPL, version 2
// http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt

#ifndef CHANNELS_H__
#define CHANNELS_H__

#define HW_RINGBUF_SIZE 4 //chosen by fair dice roll ;)
#define HW_CMD_TYPE_Reset_Ringbuf         0x10000
#define HW_CMD_TYPE_ReadLock_Ringbuf      0x40000
#define HW_CMD_TYPE_WriteLock_Ringbuf     0x20000
#define HW_CMD_TYPE_ReadWriteLock_Ringbuf 0x60000

void channel_wrch(int ch, int reg);
void channel_rdch(int ch, int reg);
int channel_rchcnt(int reg, int ch);

#endif
