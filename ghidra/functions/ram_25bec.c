/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025bec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00025bec(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = DAT_ram_0005594c;
  *DAT_ram_0005594c = 0x10;
  puVar3[1] = 0;
  FUN_ram_0003ed10(puVar3 + 2,0x33,0x10);
  uVar1 = 0;
  puVar3 = (undefined4 *)((int)puVar3 + 0x57U & 0xffffffc0);
  do {
    FUN_ram_0004070c(&DAT_ram_00062220 + uVar1 * 0x28,0x28);
    uVar2 = uVar1 + 1 & 0xff;
    (&DAT_ram_00062221)[uVar1 * 0x28] = (char)(uVar1 + 1);
    *puVar3 = 0x800;
    puVar3[1] = 0;
    (&DAT_ram_0006222c)[uVar1 * 10] = puVar3;
    puVar3[0x210] = 0xc00;
    puVar3[0x211] = 0;
    (&DAT_ram_00062230)[uVar1 * 10] = puVar3 + 0x210;
    puVar3[0x520] = 0x1000;
    puVar3[0x521] = 0;
    (&DAT_ram_00062234)[uVar1 * 10] = puVar3 + 0x520;
    puVar3[0x930] = 0xc00;
    puVar3[0x931] = 0;
    (&DAT_ram_00062238)[uVar1 * 10] = puVar3 + 0x930;
    puVar3[0xc40] = 0x1000;
    puVar3[0xc41] = 0;
    (&DAT_ram_0006223c)[uVar1 * 10] = puVar3 + 0xc40;
    puVar3[0x1050] = 0x1000;
    puVar3[0x1051] = 0;
    (&DAT_ram_00062240)[uVar1 * 10] = puVar3 + 0x1050;
    puVar4 = puVar3 + 0x1460;
    if ((undefined4 *)0xffff < puVar3 + 0x1ffe5460) break;
    uVar1 = uVar2;
    puVar3 = puVar4;
  } while (uVar2 < 3);
  DAT_ram_0005594c = puVar4;
  FUN_ram_0004070c(&DAT_ram_000622dc,0x30);
  FUN_ram_0003ed10(&DAT_ram_000622e4,0xc,0xc);
  FUN_ram_0003ed10(&DAT_ram_000622fc,0xc,0xc);
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x119c) = 0x50;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x11a0) = 5;
  FUN_ram_0002738c();
  return;
}


