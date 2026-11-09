/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00020100 */

void dsp_vector_target_01(void)

{
  undefined4 uVar1;
  
  FUN_ram_000201e4(dsp_vector_target_01);
  uVar1 = FUN_ram_000201e4(0x20108);
  STATUS32 = uVar1;
  sleep(0);
  return;
}


