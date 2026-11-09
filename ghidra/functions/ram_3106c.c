/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003106c */

undefined4 FUN_ram_0003106c(void)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  DAT_ram_00055970 = DAT_ram_00054a68;
  DAT_ram_00055971 = DAT_ram_00054a69;
  DAT_ram_00055972 = DAT_ram_00054a6a;
  DAT_ram_00055973 = DAT_ram_00054a6b;
  DAT_ram_00055974 = DAT_ram_00054a6c;
  DAT_ram_00055976 = DAT_ram_00054a6e;
  DAT_ram_00055978 = DAT_ram_00054a70;
  DAT_ram_0005597a = DAT_ram_00054a72;
  DAT_ram_0005597c = DAT_ram_00054a74;
  DAT_ram_0005597d = DAT_ram_00054a75;
  DAT_ram_0005597e = DAT_ram_00054a76;
  DAT_ram_0005597f = DAT_ram_00054a77;
  DAT_ram_00055980 = DAT_ram_00054a78;
  DAT_ram_00055981 = DAT_ram_00054a79;
  DAT_ram_00055982 = DAT_ram_00054a7a;
  DAT_ram_00055983 = DAT_ram_00054a7b;
  iVar6 = 0;
  do {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = uVar3 & 0x1f;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 << 1 | iVar6 >> uVar1 & 1U;
    } while ((int)uVar3 < 6);
    iVar5 = iVar6 + 1;
    (&DAT_ram_000b24e0)[iVar6] = (char)uVar4;
    iVar6 = iVar5;
  } while (iVar5 < 0x40);
  iVar6 = 0;
  do {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = uVar3 & 0x1f;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 << 1 | iVar6 >> uVar1 & 1U;
    } while ((int)uVar3 < 7);
    puVar2 = &DAT_ram_000b2460 + iVar6;
    iVar6 = iVar6 + 1;
    *puVar2 = (char)uVar4;
  } while (iVar6 < 0x80);
  return 0;
}


