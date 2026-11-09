/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00022dd8 */

undefined1 * FUN_ram_00022dd8(undefined1 *param_1)

{
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  
  FUN_ram_0003ec60(&local_24,param_1,0x10);
  *param_1 = (undefined1)local_24;
  param_1[1] = local_24._1_1_;
  param_1[2] = (((byte)local_20 & 0xf ^ 8) - 8) * '\x10' |
               ((byte)(local_24 >> 0x10) & 0xf ^ 8) - 8 & 0xf;
  param_1[3] = ((byte)(local_20 >> 4) ^ 0x80) + 0x80;
  param_1[4] = (undefined1)local_1c;
  param_1[5] = local_1c._1_1_;
  param_1[7] = ((byte)(local_18 >> 4) ^ 0x80) + 0x80;
  param_1[6] = (((byte)local_18 & 0xf ^ 8) - 8) * '\x10' |
               ((byte)(local_1c >> 0x10) & 0xf ^ 8) - 8 & 0xf;
  param_1[8] = ((byte)(local_20 >> 0xc) ^ 0x80) + 0x80;
  param_1[9] = ((byte)(local_20 >> 0x14) ^ 0x80) + 0x80;
  param_1[10] = ((byte)(local_20 >> 0x1c) ^ 8) - 8 & 0xf |
                (((byte)(local_24 >> 0x14) & 0xf ^ 8) - 8) * '\x10';
  param_1[0xb] = local_24._3_1_;
  param_1[0xc] = ((byte)(local_18 >> 0xc) ^ 0x80) + 0x80;
  param_1[0xd] = ((byte)(local_18 >> 0x14) ^ 0x80) + 0x80;
  param_1[0xe] = ((byte)(local_18 >> 0x1c) ^ 8) - 8 & 0xf |
                 (((byte)(local_1c >> 0x14) & 0xf ^ 8) - 8) * '\x10';
  param_1[0xf] = local_1c._3_1_;
  return param_1 + 0x10;
}


