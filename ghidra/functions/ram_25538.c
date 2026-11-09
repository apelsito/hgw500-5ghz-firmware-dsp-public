/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025538 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00025538(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_30 [2];
  
  iVar1 = _DAT_ram_e00000bc;
  iVar6 = *(int *)(_DAT_ram_e00000bc + 0x54);
  uVar5 = *(undefined4 *)(_DAT_ram_e00000bc + 0x5c);
  FUN_ram_000228e0(iVar6,uVar5);
  FUN_ram_0003c60c();
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1194) = 1;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1190) = 0;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) = 0;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1198) = 0xf;
  local_30[0] = 0;
  FUN_ram_00020a90();
  FUN_ram_0003106c();
  FUN_ram_00030360();
  if (*(int *)(iVar1 + 0x4c) == 0) {
    FUN_ram_00025bec();
  }
  else {
    FUN_ram_00025b70();
  }
  do {
    while (iVar1 = FUN_ram_0002297c(iVar6,uVar5,local_30), local_30[0] == 0) {
      FUN_ram_00024818(uVar5,iVar1);
    }
    if (iVar1 == -1) {
      puVar3 = (undefined4 *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar6 + 0x48 + iVar1 * 0xa0);
      puVar3 = (undefined4 *)(iVar6 + 0x48 + iVar1 * 0xa0);
    }
    if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x100000) != 0) {
      *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) =
           *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xffefffff;
      FUN_ram_00027a2c();
    }
    switch(uVar4) {
    case 1:
      DAT_ram_00055944 = COUNT0;
      puVar3[0xb] = &DAT_ram_0005e220;
      iVar2 = FUN_ram_00022be0(puVar3,puVar3[0xb],0x4000);
      if (iVar2 == 0) {
        *puVar3 = 10;
        *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1058) =
             *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1058) + 1;
      }
      else {
        puVar3[1] = 3;
        uVar4 = FUN_ram_00024610(iVar6,puVar3);
        puVar3[4] = uVar4;
        if (puVar3[2] == 4) {
          if (puVar3[0x15] == 0) {
            FUN_ram_00031618(puVar3,iVar6 + 0xe08);
          }
          else {
            FUN_ram_00031c04();
          }
        }
        else {
          FUN_ram_00031214(puVar3,iVar6 + 0xe08);
        }
        *puVar3 = 2;
        *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1054) =
             *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1054) + 1;
      }
      DAT_ram_00055948 = COUNT0;
      puVar3[1] = 4;
      FUN_ram_00022b58(iVar6,iVar1);
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xeac) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xeac) + 1;
      break;
    case 3:
      FUN_ram_00020aa0(puVar3[4],(puVar3[6] + 0x1000) * 2 + 0x1fU & 0xffffffe0);
      puVar3[0x17] = iVar1;
      puVar3[1] = 3;
      FUN_ram_00025368(puVar3);
      break;
    case 5:
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1178) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1178) + 1;
      FUN_ram_00025278(puVar3);
      goto LAB_ram_0002581e;
    case 6:
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1174) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1174) + 1;
      if (DAT_ram_00055950 == '\x01') {
        uVar4 = 1;
LAB_ram_000257e2:
        FUN_ram_000251ec(uVar4);
      }
      goto LAB_ram_0002581e;
    case 7:
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10d8) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10d8) + 1;
      iVar1 = FUN_ram_00024ec8();
      uVar4 = 0;
      if (iVar1 == 0) goto LAB_ram_000257e2;
      FUN_ram_00026d2c(0);
      DAT_ram_00055950 = '\x01';
LAB_ram_0002581e:
      puVar3[1] = 0;
    }
    FUN_ram_0003d3dc();
    iVar1 = FUN_ram_000208a0();
    if (iVar1 != 0) {
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10bc) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10bc) + 1;
      FUN_ram_00020a44(s_1DSP_exception__stack_overflow_ram_000553d0);
      return;
    }
  } while( true );
}


