/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0004070c */

void FUN_ram_0004070c(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    if ((((uint)param_1 & 3) == 0) && ((param_2 & 3) == 0)) {
      param_2 = param_2 >> 2;
      if (param_2 < 8) {
        uVar1 = 0;
      }
      else {
        uVar1 = param_2 - 1 >> 3;
        param_2 = param_2 & 7;
      }
      switch(param_2) {
      case 0:
        while( true ) {
          puVar2 = param_1 + 1;
          *param_1 = 0;
LAB_ram_00040774:
          param_1 = puVar2 + 1;
          *puVar2 = 0;
LAB_ram_00040778:
          *param_1 = 0;
          puVar2 = param_1 + 1;
LAB_ram_0004077c:
          param_1 = puVar2 + 1;
          *puVar2 = 0;
LAB_ram_00040780:
          *param_1 = 0;
          puVar2 = param_1 + 1;
LAB_ram_00040784:
          param_1 = puVar2 + 1;
          *puVar2 = 0;
LAB_ram_00040788:
          *param_1 = 0;
          puVar2 = param_1 + 1;
LAB_ram_0004078c:
          param_1 = puVar2 + 1;
          *puVar2 = 0;
          if ((int)uVar1 < 1) break;
          uVar1 = uVar1 - 1;
        }
        break;
      case 1:
        puVar2 = param_1;
        goto LAB_ram_0004078c;
      case 2:
        goto LAB_ram_00040788;
      case 3:
        puVar2 = param_1;
        goto LAB_ram_00040784;
      case 4:
        goto LAB_ram_00040780;
      case 5:
        puVar2 = param_1;
        goto LAB_ram_0004077c;
      case 6:
        goto LAB_ram_00040778;
      case 7:
        puVar2 = param_1;
        goto LAB_ram_00040774;
      }
    }
    else {
      FUN_ram_0003ed10(param_1,0);
    }
  }
  return;
}


