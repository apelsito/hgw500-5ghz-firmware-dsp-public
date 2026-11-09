/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000284e4 */

undefined1 * FUN_ram_000284e4(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_ram_0005596c;
  puVar1 = (undefined1 *)((uint)(DAT_ram_0005596c + param_1 + 3) & 0xfffffffc);
  if (&DAT_ram_dcf81800 < (undefined1 *)((uint)(DAT_ram_0005596c + param_1 + 3) & 0xfffffffc)) {
    puVar2 = (undefined1 *)0x0;
    puVar1 = DAT_ram_0005596c;
  }
  DAT_ram_0005596c = puVar1;
  return puVar2;
}


