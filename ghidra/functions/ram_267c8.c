/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000267c8 */

undefined4 * FUN_ram_000267c8(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (0xb < param_2) {
    FUN_ram_0002086c(s_DSP_assert_at_file__s__line__u_ram_0005547c,s_os_dsp_cache_c_ram_0005549c,
                     0x47);
    FUN_ram_0002086c(s_Invalid_idx___u_ram_000554ac,param_2);
    puVar2 = (undefined4 *)FUN_ram_00020a44(s_5DSP_exception__assertion_ram_000554c0);
    return puVar2;
  }
  param_1 = param_1 * 0x18;
  if ((&DAT_ram_000622dc)[param_1 + param_2 + 8] == '\f') {
    uVar3 = 0;
    do {
      if ((&DAT_ram_0006231c)[uVar3 * 0x1a16] == 0) {
        (&DAT_ram_000622dc)[param_1 + param_2 + 8] = (char)uVar3;
        cVar1 = (&DAT_ram_000622f0)[param_1];
        (&DAT_ram_0006231c)[uVar3 * 0x1a16] = 1;
        (&DAT_ram_000622f0)[param_1] = cVar1 + '\x01';
        return &DAT_ram_0006231c + uVar3 * 0x1a16;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0xc);
  }
  return (undefined4 *)0x0;
}


