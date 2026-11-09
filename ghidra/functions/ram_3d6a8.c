/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d6a8 */

void FUN_ram_0003d6a8(void)

{
  undefined8 uVar1;
  undefined1 *local_c;
  
  uVar1 = FUN_ram_00029784();
  local_c = (undefined1 *)uVar1;
  FUN_ram_0003dc38(PTR_LAB_ram_0003d6d0_ram_0003d6f0,&local_c,(int)((ulonglong)uVar1 >> 0x20),
                   &stack0x00000008);
  *local_c = 0;
  return;
}


