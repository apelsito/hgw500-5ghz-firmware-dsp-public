/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000228ac */

void FUN_ram_000228ac(char *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar1 = cVar2, cVar1 != '\0') {
    param_1 = param_1 + 1;
    if (cVar1 == '\n') {
      do {
      } while ((DAT_ram_f0000014 & 0x40) == 0);
    }
    do {
    } while ((DAT_ram_f0000014 & 0x40) == 0);
    DAT_ram_f0000000 = cVar1;
    cVar2 = *param_1;
  }
  return;
}


