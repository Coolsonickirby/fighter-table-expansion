
/* WARNING: Type propagation algorithm not settling */

void prepare_fighter_for_entry(long **param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  Variadic VVar3;
  bool bVar4;
  uint fighter_num;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  L2CAgent *pLVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  LoadedArc *pLVar16;
  HashToIndex HVar17;
  HashGroup *pHVar18;
  LoadedFsSearch *pLVar19;
  lua_State *plVar20;
  void *pvVar21;
  long **pplVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  void **ppvVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  int iVar30;
  uint auStack_660 [2];
  uint auStack_658 [2];
  uint auStack_650 [2];
  uint auStack_648 [2];
  uint auStack_640 [2];
  uint auStack_638 [2];
  uint auStack_630 [2];
  uint auStack_628 [2];
  uint auStack_620 [2];
  uint auStack_618 [2];
  uint auStack_610 [2];
  uint auStack_608 [2];
  uint auStack_600 [2];
  uint auStack_5f8 [2];
  uint auStack_5f0 [2];
  uint auStack_5e8 [2];
  uint auStack_5e0 [2];
  uint auStack_5d8 [2];
  uint auStack_5d0 [2];
  uint auStack_5c8 [2];
  uint auStack_5c0 [2];
  uint auStack_5b8 [2];
  uint auStack_5b0 [2];
  uint auStack_5a8 [2];
  uint auStack_5a0 [2];
  uint auStack_598 [2];
  uint auStack_590 [2];
  uint auStack_588 [2];
  uint auStack_580 [2];
  uint auStack_578 [2];
  uint auStack_570 [2];
  uint auStack_568 [2];
  uint auStack_560 [2];
  uint auStack_558 [2];
  uint auStack_550 [2];
  uint auStack_548 [2];
  uint auStack_540 [2];
  uint auStack_538 [2];
  uint auStack_530 [2];
  uint auStack_528 [2];
  uint auStack_520 [2];
  uint auStack_518 [2];
  uint auStack_510 [2];
  uint auStack_508 [2];
  uint auStack_500 [2];
  uint auStack_4f8 [2];
  uint auStack_4f0 [2];
  uint auStack_4e8 [2];
  uint auStack_4e0 [2];
  uint auStack_4d8 [2];
  uint auStack_4d0 [2];
  uint auStack_4c8 [2];
  uint auStack_4c0 [2];
  uint auStack_4b8 [2];
  uint auStack_4b0 [2];
  uint auStack_4a8 [2];
  uint auStack_4a0 [2];
  uint auStack_498 [2];
  uint auStack_490 [2];
  uint auStack_488 [2];
  uint auStack_480 [2];
  uint auStack_478 [2];
  uint auStack_470 [2];
  uint auStack_468 [2];
  uint auStack_460 [2];
  uint auStack_458 [2];
  uint auStack_450 [2];
  uint auStack_448 [2];
  uint auStack_440 [2];
  uint auStack_438 [2];
  uint auStack_430 [2];
  uint auStack_428 [2];
  uint auStack_420 [2];
  uint auStack_418 [2];
  uint auStack_410 [2];
  uint auStack_408 [2];
  uint auStack_400 [2];
  uint auStack_3f8 [2];
  uint auStack_3f0 [2];
  uint auStack_3e8 [2];
  uint auStack_3e0 [2];
  uint auStack_3d8 [2];
  uint auStack_3d0 [2];
  uint auStack_3c8 [2];
  uint auStack_3c0 [2];
  uint auStack_3b8 [2];
  uint auStack_3b0 [2];
  uint auStack_3a8 [2];
  uint auStack_3a0 [2];
  uint auStack_398 [2];
  uint auStack_390 [2];
  uint auStack_388 [2];
  uint auStack_380 [2];
  uint auStack_378 [2];
  uint auStack_370 [188];
  Variadic local_80 [2];
  uint local_68;
  undefined4 local_64;
  
  FUN_71002c5cf0(param_1);
  if (0x5d < *(uint *)((long)param_1 + 0xc04)) {
    return;
  }
  plVar24 = *param_1;
  ppvVar26 = (void **)*plVar24;
  pvVar6 = jemalloc(0x10,0x50);
  if (pvVar6 == (void *)0x0) {
    if (GlobalAllocator != (void *)0x0) {
      local_64 = 0;
      local_80[0].internal = &DAT_00000050;
                    /* WARNING: Load size is inaccurate */
      uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
      if (((uVar7 & 1) != 0) && (pvVar6 = jemalloc(0x10,0x50), pvVar6 != (void *)0x0))
      goto LAB_71002c99a0;
    }
    pvVar6 = (void *)0x0;
  }
LAB_71002c99a0:
  FUN_7103725750(pvVar6,0x15e140c2fd,0x7480f2ad8,0x3c);
  pvVar21 = *ppvVar26;
  *ppvVar26 = pvVar6;
  if (pvVar21 != (void *)0x0) {
    FUN_7103725890(pvVar21);
    free?(pvVar21);
  }
  lVar27 = *plVar24;
  pvVar6 = jemalloc(0x10,0x50);
  if (pvVar6 == (void *)0x0) {
    if (GlobalAllocator != (void *)0x0) {
      local_64 = 0;
      local_80[0].internal = &DAT_00000050;
                    /* WARNING: Load size is inaccurate */
      uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
      if (((uVar7 & 1) != 0) && (pvVar6 = jemalloc(0x10,0x50), pvVar6 != (void *)0x0))
      goto LAB_71002c9a44;
    }
    pvVar6 = (void *)0x0;
  }
LAB_71002c9a44:
  FUN_7103725750(pvVar6,0x13fa506ee9,0x7480f2ad8,0x3c);
  pvVar21 = *(void **)(lVar27 + 0x10);
  *(void **)(lVar27 + 0x10) = pvVar6;
  if (pvVar21 != (void *)0x0) {
    FUN_7103725890(pvVar21);
    free?(pvVar21);
  }
  lVar27 = *plVar24;
  pvVar6 = jemalloc(0x10,0x50);
  if (pvVar6 == (void *)0x0) {
    if (GlobalAllocator != (void *)0x0) {
      local_64 = 0;
      local_80[0].internal = &DAT_00000050;
                    /* WARNING: Load size is inaccurate */
      uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
      if (((uVar7 & 1) != 0) && (pvVar6 = jemalloc(0x10,0x50), pvVar6 != (void *)0x0))
      goto LAB_71002c9adc;
    }
    pvVar6 = (void *)0x0;
  }
LAB_71002c9adc:
  FUN_7103725750(pvVar6,0x1696ce30db,0x7480f2ad8,0x3c);
  pvVar21 = *(void **)(lVar27 + 0x20);
  *(void **)(lVar27 + 0x20) = pvVar6;
  if (pvVar21 != (void *)0x0) {
    FUN_7103725890(pvVar21);
    free?(pvVar21);
  }
  *(long **)(*(long *)(**(long **)*plVar24 + 8) + -8) = ((long **)*plVar24)[6];
  *(undefined8 *)(*(long *)(**(long **)(*plVar24 + 0x10) + 8) + -8) =
       *(undefined8 *)(*plVar24 + 0x30);
  *(undefined8 *)(*(long *)(**(long **)(*plVar24 + 0x20) + 8) + -8) =
       *(undefined8 *)(*plVar24 + 0x30);
  pplVar22 = (long **)*plVar24;
  if (*(uint *)((long)pplVar22[6] + 0xc04) < 0x76) {
    uVar8 = (&hash40_fighter_kind_mario)[(int)*(uint *)((long)pplVar22[6] + 0xc04)];
  }
  else {
    uVar8 = 0x1106bb2b2d;
  }
  plVar20 = *(lua_State **)(**pplVar22 + 8);
  fighter_num = get_fighter_id_from_fighter_kind?(uVar8);
  switch(fighter_num) {
  case 0:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_mario
                               (0x51a5dc49e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 1:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_donkey
                               (0x697edfef8,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 2:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_link
                               (0x436ac99f1,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 3:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_samus
                               (0x520810822,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 4:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_samusd
                               (0x64d9d8a20,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 5:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_yoshi
                               (0x59e587cac,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 6:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_kirby
                               (0x54789754b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 7:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_fox
                               (0x30fa0e0e6,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 8:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pikachu
                               (0x7f45d9698,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 9:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_luigi
                               (0x59fd5e9cc,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 10:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_ness
                               (0x479bf5c54,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0xb:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_captain
                               (0x7ae35bf5b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0xc:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_purin
                               (0x52a5167f3,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0xd:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_peach
                               (0x577a460fa,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0xe:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_daisy
                               (0x543c7a5f4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0xf:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_koopa
                               (0x51d84f231,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x10:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_sheik
                               (0x5a681d31b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x11:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_zelda
                               (0x50351c56b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x12:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_mariod
                               (0x68f70a94b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x13:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pichu
                               (0x5be04be3e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x14:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_falco
                               (0x581da937f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x15:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_marth
                               (0x57b553d21,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x16:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_lucina
                               (0x65098be98,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x17:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_younglink
                               (0x90396af21,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x18:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_ganon
                               (0x5648c113b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x19:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_mewtwo
                               (0x64c198e4b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x1a:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_roy
                               (0x36388dbdc,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x1b:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_chrom
                               (0x56031f3df,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x1c:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_gamewatch
                               (0x9e63b5611,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x1d:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_metaknight
                               (0xa6177fc75,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x1e:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pit
                               (0x348e7d489,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x1f:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pitb
                               (0x4e59233a9,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x20:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_szerosuit
                               (0x95e5689f0,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x21:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_wario
                               (0x5300d4bbd,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x22:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_snake
                               (0x5516d6b9e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x23:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_ike
                               (0x303960e06,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x24:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pzenigame
                               (0x95607ace7,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x25:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pfushigisou
                               (0xbbf94ecd7,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x26:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_plizardon
                               (0x947ac2b3f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x27:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_diddy
                               (0x58b289ade,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x28:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_lucas
                               (0x5397a32e6,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x29:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_sonic
                               (0x539d88c71,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x2a:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_dedede
                               (0x6b5644639,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x2b:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pikmin
                               (0x69cdf0d9e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x2c:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_lucario
                               (0x7e9dae87f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x2d:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_robot
                               (0x5d82b7ee4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x2e:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_toonlink
                               (0x8f88e4e41,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x2f:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_wolf
                               (0x4f9be2be2,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x30:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_murabito
                               (0x8325368a4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x31:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_rockman
                               (0x7bb6f90a6,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x32:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_wiifit
                               (0x6dae4e336,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x33:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_rosetta
                               (0x78fad136d,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x34:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_littlemac
                               (0x9a306c96b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x35:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_gekkouga
                               (0x8cb254d0c,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x36:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_palutena
                               (0x8c13d80d1,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x37:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pacman
                               (0x6a1c2e4b8,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x38:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_reflet
                               (0x6b6984508,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x39:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_shulk
                               (0x5c7d0842e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x3a:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_koopajr
                               (0x7f52e08c4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x3b:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_duckhunt
                               (0x8efef3357,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x3c:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_ryu
                               (0x376a62220,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x3d:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_ken
                               (0x309432e6e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x3e:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_cloud
                               (0x5325c16d4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x3f:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_kamui
                               (0x58d732d1b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x40:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_bayonetta
                               (0x9006bd673,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x41:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_inkling
                               (0x74100f4f8,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x42:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_ridley
                               (0x6a7d01c3f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x43:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_simon
                               (0x5361eb6cf,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x44:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_richter
                               (0x71c19dde1,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x45:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_krool
                               (0x50c1c0f50,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x46:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_shizue
                               (0x6e5eeaf2b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x47:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_gaogaen
                               (0x756d32c66,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x48:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_miifighter
                               (0xa1f93775b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x49:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_miiswordsman
                               (0xc1c374be4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x4a:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_miigunner
                               (0x9815d794e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x4b:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_popo
                               (0x4fbc2f6a2,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x4c:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_nana
                               (0x47263e9dc,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x4d:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_koopag
                               (0x650179fbe,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x4e:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_miienemyf
                               (0x9f24fceae,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x4f:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_miienemys
                               (0x99f922a45,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x50:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_miienemyg
                               (0x98548fe38,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x51:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_packun
                               (0x68be14f5f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x52:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_jack
                               (0x4a87ae9d8,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x53:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_brave
                               (0x5e94e5197,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x54:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_buddy
                               (0x51ea78759,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x55:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_dolly
                               (0x568891eb2,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x56:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_master
                               (0x62d09a3d6,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x57:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_tantan
                               (0x6dbcee68c,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x58:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_pickel
                               (0x61f5d77e3,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x59:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_edge
                               (0x47506d366,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x5a:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_eflame
                               (0x62ae7d436,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x5b:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_elight
                               (0x644c394a0,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x5c:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_demon
                               (0x5ae0842e5,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  case 0x5d:
    plVar9 = (long *)lua2cpp::create_agent_fighter_ai_action_trail
                               (0x5b268858f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                                plVar20);
    break;
  default:
    plVar9 = (long *)0x0;
  }
  plVar14 = pplVar22[1];
  pplVar22[1] = plVar9;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  lVar27 = *plVar24;
  if (fighter_num < 0x5e) {
    plVar20 = *(lua_State **)(**(long **)(lVar27 + 0x10) + 8);
    switch(fighter_num) {
    case 0:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_mario
                        (0x51a5dc49e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 1:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_donkey
                        (0x697edfef8,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 2:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_link
                        (0x436ac99f1,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 3:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_samus
                        (0x520810822,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 4:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_samusd
                        (0x64d9d8a20,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 5:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_yoshi
                        (0x59e587cac,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 6:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_kirby
                        (0x54789754b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 7:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_fox
                        (0x30fa0e0e6,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 8:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pikachu
                        (0x7f45d9698,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 9:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_luigi
                        (0x59fd5e9cc,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 10:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_ness
                        (0x479bf5c54,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0xb:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_captain
                        (0x7ae35bf5b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0xc:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_purin
                        (0x52a5167f3,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0xd:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_peach
                        (0x577a460fa,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0xe:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_daisy
                        (0x543c7a5f4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0xf:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_koopa
                        (0x51d84f231,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x10:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_sheik
                        (0x5a681d31b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x11:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_zelda
                        (0x50351c56b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x12:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_mariod
                        (0x68f70a94b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x13:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pichu
                        (0x5be04be3e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x14:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_falco
                        (0x581da937f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x15:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_marth
                        (0x57b553d21,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x16:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_lucina
                        (0x65098be98,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x17:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_younglink
                        (0x90396af21,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x18:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_ganon
                        (0x5648c113b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x19:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_mewtwo
                        (0x64c198e4b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x1a:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_roy
                        (0x36388dbdc,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x1b:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_chrom
                        (0x56031f3df,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x1c:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_gamewatch
                        (0x9e63b5611,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x1d:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_metaknight
                        (0xa6177fc75,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x1e:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pit
                        (0x348e7d489,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x1f:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pitb
                        (0x4e59233a9,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x20:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_szerosuit
                        (0x95e5689f0,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x21:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_wario
                        (0x5300d4bbd,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x22:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_snake
                        (0x5516d6b9e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x23:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_ike
                        (0x303960e06,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x24:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pzenigame
                        (0x95607ace7,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x25:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pfushigisou
                        (0xbbf94ecd7,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x26:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_plizardon
                        (0x947ac2b3f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x27:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_diddy
                        (0x58b289ade,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x28:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_lucas
                        (0x5397a32e6,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x29:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_sonic
                        (0x539d88c71,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x2a:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_dedede
                        (0x6b5644639,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x2b:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pikmin
                        (0x69cdf0d9e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x2c:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_lucario
                        (0x7e9dae87f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x2d:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_robot
                        (0x5d82b7ee4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x2e:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_toonlink
                        (0x8f88e4e41,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x2f:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_wolf
                        (0x4f9be2be2,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x30:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_murabito
                        (0x8325368a4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x31:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_rockman
                        (0x7bb6f90a6,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x32:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_wiifit
                        (0x6dae4e336,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x33:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_rosetta
                        (0x78fad136d,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x34:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_littlemac
                        (0x9a306c96b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x35:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_gekkouga
                        (0x8cb254d0c,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x36:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_palutena
                        (0x8c13d80d1,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x37:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pacman
                        (0x6a1c2e4b8,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x38:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_reflet
                        (0x6b6984508,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x39:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_shulk
                        (0x5c7d0842e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x3a:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_koopajr
                        (0x7f52e08c4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x3b:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_duckhunt
                        (0x8efef3357,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x3c:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_ryu
                        (0x376a62220,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x3d:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_ken
                        (0x309432e6e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x3e:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_cloud
                        (0x5325c16d4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x3f:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_kamui
                        (0x58d732d1b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x40:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_bayonetta
                        (0x9006bd673,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x41:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_inkling
                        (0x74100f4f8,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x42:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_ridley
                        (0x6a7d01c3f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x43:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_simon
                        (0x5361eb6cf,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x44:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_richter
                        (0x71c19dde1,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x45:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_krool
                        (0x50c1c0f50,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x46:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_shizue
                        (0x6e5eeaf2b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x47:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_gaogaen
                        (0x756d32c66,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x48:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_miifighter
                        (0xa1f93775b,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x49:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_miiswordsman
                        (0xc1c374be4,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x4a:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_miigunner
                        (0x9815d794e,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x4b:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_popo
                        (0x4fbc2f6a2,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x4c:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_nana
                        (0x47263e9dc,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x4d:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_koopag
                        (0x650179fbe,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x4e:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_miienemyf
                        (0x9f24fceae,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x4f:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_miienemys
                        (0x99f922a45,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x50:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_miienemyg
                        (0x98548fe38,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x51:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_packun
                        (0x68be14f5f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x52:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_jack
                        (0x4a87ae9d8,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x53:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_brave
                        (0x5e94e5197,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x54:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_buddy
                        (0x51ea78759,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x55:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_dolly
                        (0x568891eb2,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x56:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_master
                        (0x62d09a3d6,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x57:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_tantan
                        (0x6dbcee68c,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x58:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_pickel
                        (0x61f5d77e3,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x59:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_edge
                        (0x47506d366,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x5a:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_eflame
                        (0x62ae7d436,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x5b:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_elight
                        (0x644c394a0,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x5c:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_demon
                        (0x5ae0842e5,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
      break;
    case 0x5d:
      uVar8 = lua2cpp::create_agent_fighter_ai_mode_trail
                        (0x5b268858f,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,plVar20);
    }
  }
  else {
    uVar8 = 0;
  }
  plVar9 = *(long **)(lVar27 + 0x18);
  *(undefined8 *)(lVar27 + 0x18) = uVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  lVar27 = *plVar24;
  uVar8 = lua2cpp::create_agent_fighter_ai_analyst_common
                    (0x4c0b4fe61,(BattleObject *)0x0,(BattleObjectModuleAccessor *)0x0,
                     *(lua_State **)(**(long **)(lVar27 + 0x20) + 8));
  plVar9 = *(long **)(lVar27 + 0x28);
  *(undefined8 *)(lVar27 + 0x28) = uVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  *(undefined *)(*plVar24 + 0x38) = 1;
  *(undefined *)(*plVar24 + 0x39) = 1;
  *(undefined *)(*plVar24 + 0x3a) = 1;
  plVar24 = *param_1;
  pplVar22 = (long **)*plVar24;
  if (*(char *)(pplVar22 + 7) != '\0') {
    if ((L2CAgent *)pplVar22[1] == (L2CAgent *)0x0) {
      CallLuaFunctionFromState(*(undefined8 *)(**pplVar22 + 8),"ENTRY");
    }
    else {
      local_80[0].internal = (undefined *)0x0;
      L2CAgent::CallFunctionByHash((L2CAgent *)pplVar22[1],0x52b219d70,local_80,(char *)0x0);
      VVar3.internal = local_80[0].internal;
      if ((undefined *)local_80[0].internal != (undefined *)0x0) {
        lVar28 = *(long *)((long)local_80[0].internal + 0x10);
        lVar27 = 0;
        do {
          cVar2 = *(char *)(lVar28 + lVar27);
          if (cVar2 == 's') {
            lVar25 = *(long *)((long)VVar3.internal + 8);
            pvVar6 = *(void **)(lVar25 + lVar27 * 8);
            if (pvVar6 != (void *)0x0) {
              free?(pvVar6);
            }
            *(undefined8 *)(lVar25 + lVar27 * 8) = 0;
          }
          else if (cVar2 == '\0') goto LAB_71002cb310;
          lVar27 = lVar27 + 1;
        } while( true );
      }
    }
    goto LAB_71002cb33c;
  }
LAB_71002cb45c:
  if (*param_2 != 0xffffff) {
    uVar7 = FUN_710353dba0();
    uVar15 = uVar7 >> 0x28;
    fighter_num = (uint)(uVar7 >> 0x20);
    uVar13 = fighter_num >> 8;
    pLVar19 = LoadedTables->loaded_data->search;
    if (uVar13 == 0xffffff) {
      local_80[0].internal = (void *)(uVar7 & 0xffffffffff);
      puVar11 = (ulong *)bsearch(local_80,pLVar19->file_path_to_idx,
                                 (ulong)pLVar19->body->file_path_length,8,
                                 (__compar_fn_t)&LAB_7103541260);
      if ((puVar11 != (ulong *)0x0) && (*puVar11 >> 0x28 != 0xffffff)) {
        pHVar18 = pLVar19->idx_to_group + (*puVar11 >> 0x28);
joined_r0x0071002cb4d4:
        while (pHVar18 != (HashGroup *)0x0) {
          FUN_710353d7b0(&local_68,uVar7);
          fighter_num = get_file_path_idx_from_hash_group_idx?(local_68);
          if (fighter_num == 0xffffff) goto LAB_71002d1094;
          add_idx_to_table1_and_table2(LoadedTables,fighter_num);
          plVar24 = DAT_71052b50e8;
          pLVar16 = LoadedTables->loaded_data->arc;
                    /* WARNING: Load size is inaccurate */
          if ((fighter_num < pLVar16->fs_header->file_info_path_count) &&
             ((long)pLVar16->file_paths[fighter_num].FileName.Hash == 0x15aedcf61f)) {
            switch(*(undefined4 *)((long)param_1 + 0xc04)) {
            case 0:
              puVar29 = auStack_370 + 0xba;
              auStack_370[186] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100342830(plVar24,auStack_370 + 0xba);
              break;
            case 1:
              puVar29 = auStack_370 + 0xb8;
              auStack_370[184] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100342980(plVar24,auStack_370 + 0xb8);
              break;
            case 2:
              puVar29 = auStack_370 + 0xb6;
              auStack_370[182] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100342ad0(plVar24,auStack_370 + 0xb6);
              break;
            case 3:
              puVar29 = auStack_370 + 0xb4;
              auStack_370[180] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100342c20(plVar24,auStack_370 + 0xb4);
              break;
            case 4:
              puVar29 = auStack_370 + 0xb2;
              auStack_370[178] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100342d70(plVar24,auStack_370 + 0xb2);
              break;
            case 5:
              puVar29 = auStack_370 + 0xb0;
              auStack_370[176] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100342ec0(plVar24,auStack_370 + 0xb0);
              break;
            case 6:
              puVar29 = auStack_370 + 0xae;
              auStack_370[174] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343010(plVar24,auStack_370 + 0xae);
              break;
            case 7:
              puVar29 = auStack_370 + 0xac;
              auStack_370[172] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343160(plVar24,auStack_370 + 0xac);
              break;
            case 8:
              puVar29 = auStack_370 + 0xaa;
              auStack_370[170] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003432b0(plVar24,auStack_370 + 0xaa);
              break;
            case 9:
              puVar29 = auStack_370 + 0xa8;
              auStack_370[168] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343400(plVar24,auStack_370 + 0xa8);
              break;
            case 10:
              puVar29 = auStack_370 + 0xa6;
              auStack_370[166] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343550(plVar24,auStack_370 + 0xa6);
              break;
            case 0xb:
              puVar29 = auStack_370 + 0xa4;
              auStack_370[164] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003436a0(plVar24,auStack_370 + 0xa4);
              break;
            case 0xc:
              puVar29 = auStack_370 + 0xa2;
              auStack_370[162] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003437f0(plVar24,auStack_370 + 0xa2);
              break;
            case 0xd:
              puVar29 = auStack_370 + 0xa0;
              auStack_370[160] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343940(plVar24,auStack_370 + 0xa0);
              break;
            case 0xe:
              puVar29 = auStack_370 + 0x9e;
              auStack_370[158] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343a90(plVar24,auStack_370 + 0x9e);
              break;
            case 0xf:
              puVar29 = auStack_370 + 0x9c;
              auStack_370[156] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343be0(plVar24,auStack_370 + 0x9c);
              break;
            case 0x10:
              puVar29 = auStack_370 + 0x9a;
              auStack_370[154] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343d30(plVar24,auStack_370 + 0x9a);
              break;
            case 0x11:
              puVar29 = auStack_370 + 0x98;
              auStack_370[152] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343e80(plVar24,auStack_370 + 0x98);
              break;
            case 0x12:
              puVar29 = auStack_370 + 0x96;
              auStack_370[150] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100343fd0(plVar24,auStack_370 + 0x96);
              break;
            case 0x13:
              puVar29 = auStack_370 + 0x94;
              auStack_370[148] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344120(plVar24,auStack_370 + 0x94);
              break;
            case 0x14:
              puVar29 = auStack_370 + 0x92;
              auStack_370[146] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344270(plVar24,auStack_370 + 0x92);
              break;
            case 0x15:
              puVar29 = auStack_370 + 0x90;
              auStack_370[144] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003443c0(plVar24,auStack_370 + 0x90);
              break;
            case 0x16:
              puVar29 = auStack_370 + 0x8e;
              auStack_370[142] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344510(plVar24,auStack_370 + 0x8e);
              break;
            case 0x17:
              puVar29 = auStack_370 + 0x8c;
              auStack_370[140] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344660(plVar24,auStack_370 + 0x8c);
              break;
            case 0x18:
              puVar29 = auStack_370 + 0x8a;
              auStack_370[138] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003447b0(plVar24,auStack_370 + 0x8a);
              break;
            case 0x19:
              puVar29 = auStack_370 + 0x88;
              auStack_370[136] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344900(plVar24,auStack_370 + 0x88);
              break;
            case 0x1a:
              puVar29 = auStack_370 + 0x86;
              auStack_370[134] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344a50(plVar24,auStack_370 + 0x86);
              break;
            case 0x1b:
              puVar29 = auStack_370 + 0x84;
              auStack_370[132] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344ba0(plVar24,auStack_370 + 0x84);
              break;
            case 0x1c:
              puVar29 = auStack_370 + 0x82;
              auStack_370[130] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344cf0(plVar24,auStack_370 + 0x82);
              break;
            case 0x1d:
              puVar29 = auStack_370 + 0x80;
              auStack_370[128] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344e40(plVar24,auStack_370 + 0x80);
              break;
            case 0x1e:
              puVar29 = auStack_370 + 0x7e;
              auStack_370[126] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100344fa0(plVar24,auStack_370 + 0x7e);
              break;
            case 0x1f:
              puVar29 = auStack_370 + 0x7c;
              auStack_370[124] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345100(plVar24,auStack_370 + 0x7c);
              break;
            case 0x20:
              puVar29 = auStack_370 + 0x7a;
              auStack_370[122] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345260(plVar24,auStack_370 + 0x7a);
              break;
            case 0x21:
              puVar29 = auStack_370 + 0x78;
              auStack_370[120] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003453c0(plVar24,auStack_370 + 0x78);
              break;
            case 0x22:
              puVar29 = auStack_370 + 0x76;
              auStack_370[118] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345520(plVar24,auStack_370 + 0x76);
              break;
            case 0x23:
              puVar29 = auStack_370 + 0x74;
              auStack_370[116] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345680(plVar24,auStack_370 + 0x74);
              break;
            case 0x24:
              puVar29 = auStack_370 + 0x72;
              auStack_370[114] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003457e0(plVar24,auStack_370 + 0x72);
              break;
            case 0x25:
              puVar29 = auStack_370 + 0x70;
              auStack_370[112] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345940(plVar24,auStack_370 + 0x70);
              break;
            case 0x26:
              puVar29 = auStack_370 + 0x6e;
              auStack_370[110] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345aa0(plVar24,auStack_370 + 0x6e);
              break;
            case 0x27:
              puVar29 = auStack_370 + 0x6c;
              auStack_370[108] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345c00(plVar24,auStack_370 + 0x6c);
              break;
            case 0x28:
              puVar29 = auStack_370 + 0x6a;
              auStack_370[106] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345d60(plVar24,auStack_370 + 0x6a);
              break;
            case 0x29:
              puVar29 = auStack_370 + 0x68;
              auStack_370[104] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100345ec0(plVar24,auStack_370 + 0x68);
              break;
            case 0x2a:
              puVar29 = auStack_370 + 0x66;
              auStack_370[102] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346020(plVar24,auStack_370 + 0x66);
              break;
            case 0x2b:
              puVar29 = auStack_370 + 100;
              auStack_370[100] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346180(plVar24,auStack_370 + 100);
              break;
            case 0x2c:
              puVar29 = auStack_370 + 0x62;
              auStack_370[98] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003462e0(plVar24,auStack_370 + 0x62);
              break;
            case 0x2d:
              puVar29 = auStack_370 + 0x60;
              auStack_370[96] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346440(plVar24,auStack_370 + 0x60);
              break;
            case 0x2e:
              puVar29 = auStack_370 + 0x5e;
              auStack_370[94] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003465a0(plVar24,auStack_370 + 0x5e);
              break;
            case 0x2f:
              puVar29 = auStack_370 + 0x5c;
              auStack_370[92] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346700(plVar24,auStack_370 + 0x5c);
              break;
            case 0x30:
              puVar29 = auStack_370 + 0x5a;
              auStack_370[90] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346860(plVar24,auStack_370 + 0x5a);
              break;
            case 0x31:
              puVar29 = auStack_370 + 0x58;
              auStack_370[88] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003469c0(plVar24,auStack_370 + 0x58);
              break;
            case 0x32:
              puVar29 = auStack_370 + 0x56;
              auStack_370[86] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346b20(plVar24,auStack_370 + 0x56);
              break;
            case 0x33:
              puVar29 = auStack_370 + 0x54;
              auStack_370[84] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346c80(plVar24,auStack_370 + 0x54);
              break;
            case 0x34:
              puVar29 = auStack_370 + 0x52;
              auStack_370[82] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346de0(plVar24,auStack_370 + 0x52);
              break;
            case 0x35:
              puVar29 = auStack_370 + 0x50;
              auStack_370[80] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100346f40(plVar24,auStack_370 + 0x50);
              break;
            case 0x36:
              puVar29 = auStack_370 + 0x4e;
              auStack_370[78] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003470a0(plVar24,auStack_370 + 0x4e);
              break;
            case 0x37:
              puVar29 = auStack_370 + 0x4c;
              auStack_370[76] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347200(plVar24,auStack_370 + 0x4c);
              break;
            case 0x38:
              puVar29 = auStack_370 + 0x4a;
              auStack_370[74] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347360(plVar24,auStack_370 + 0x4a);
              break;
            case 0x39:
              puVar29 = auStack_370 + 0x48;
              auStack_370[72] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003474c0(plVar24,auStack_370 + 0x48);
              break;
            case 0x3a:
              puVar29 = auStack_370 + 0x46;
              auStack_370[70] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347620(plVar24,auStack_370 + 0x46);
              break;
            case 0x3b:
              puVar29 = auStack_370 + 0x44;
              auStack_370[68] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347780(plVar24,auStack_370 + 0x44);
              break;
            case 0x3c:
              puVar29 = auStack_370 + 0x42;
              auStack_370[66] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003478e0(plVar24,auStack_370 + 0x42);
              break;
            case 0x3d:
              puVar29 = auStack_370 + 0x40;
              auStack_370[64] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347a40(plVar24,auStack_370 + 0x40);
              break;
            case 0x3e:
              puVar29 = auStack_370 + 0x3e;
              auStack_370[62] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347ba0(plVar24,auStack_370 + 0x3e);
              break;
            case 0x3f:
              puVar29 = auStack_370 + 0x3c;
              auStack_370[60] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347d00(plVar24,auStack_370 + 0x3c);
              break;
            case 0x40:
              puVar29 = auStack_370 + 0x3a;
              auStack_370[58] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347e60(plVar24,auStack_370 + 0x3a);
              break;
            case 0x41:
              puVar29 = auStack_370 + 0x38;
              auStack_370[56] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100347fc0(plVar24,auStack_370 + 0x38);
              break;
            case 0x42:
              puVar29 = auStack_370 + 0x36;
              auStack_370[54] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348120(plVar24,auStack_370 + 0x36);
              break;
            case 0x43:
              puVar29 = auStack_370 + 0x34;
              auStack_370[52] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348280(plVar24,auStack_370 + 0x34);
              break;
            case 0x44:
              puVar29 = auStack_370 + 0x32;
              auStack_370[50] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003483e0(plVar24,auStack_370 + 0x32);
              break;
            case 0x45:
              puVar29 = auStack_370 + 0x30;
              auStack_370[48] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348540(plVar24,auStack_370 + 0x30);
              break;
            case 0x46:
              puVar29 = auStack_370 + 0x2e;
              auStack_370[46] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003486a0(plVar24,auStack_370 + 0x2e);
              break;
            case 0x47:
              puVar29 = auStack_370 + 0x2c;
              auStack_370[44] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348800(plVar24,auStack_370 + 0x2c);
              break;
            case 0x48:
              puVar29 = auStack_370 + 0x2a;
              auStack_370[42] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348960(plVar24,auStack_370 + 0x2a);
              break;
            case 0x49:
              puVar29 = auStack_370 + 0x28;
              auStack_370[40] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348ac0(plVar24,auStack_370 + 0x28);
              break;
            case 0x4a:
              puVar29 = auStack_370 + 0x26;
              auStack_370[38] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348c20(plVar24,auStack_370 + 0x26);
              break;
            case 0x4b:
              puVar29 = auStack_370 + 0x24;
              auStack_370[36] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348d80(plVar24,auStack_370 + 0x24);
              break;
            case 0x4c:
              puVar29 = auStack_370 + 0x22;
              auStack_370[34] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100348ee0(plVar24,auStack_370 + 0x22);
              break;
            case 0x4d:
              puVar29 = auStack_370 + 0x20;
              auStack_370[32] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100349040(plVar24,auStack_370 + 0x20);
              break;
            case 0x4e:
              puVar29 = auStack_370 + 0x1e;
              auStack_370[30] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003491a0(plVar24,auStack_370 + 0x1e);
              break;
            case 0x4f:
              puVar29 = auStack_370 + 0x1c;
              auStack_370[28] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100349300(plVar24,auStack_370 + 0x1c);
              break;
            case 0x50:
              puVar29 = auStack_370 + 0x1a;
              auStack_370[26] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100349460(plVar24,auStack_370 + 0x1a);
              break;
            case 0x51:
              puVar29 = auStack_370 + 0x18;
              auStack_370[24] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003495c0(plVar24,auStack_370 + 0x18);
              break;
            case 0x52:
              puVar29 = auStack_370 + 0x16;
              auStack_370[22] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100349720(plVar24,auStack_370 + 0x16);
              break;
            case 0x53:
              puVar29 = auStack_370 + 0x14;
              auStack_370[20] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100349880(plVar24,auStack_370 + 0x14);
              break;
            case 0x54:
              puVar29 = auStack_370 + 0x12;
              auStack_370[18] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x0071003499e0(plVar24,auStack_370 + 0x12);
              break;
            case 0x55:
              puVar29 = auStack_370 + 0x10;
              auStack_370[16] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100349b40(plVar24,auStack_370 + 0x10);
              break;
            case 0x56:
              puVar29 = auStack_370 + 0xe;
              auStack_370[14] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100349d90(plVar24,auStack_370 + 0xe);
              break;
            case 0x57:
              puVar29 = auStack_370 + 0xc;
              auStack_370[12] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x007100349ef0(plVar24,auStack_370 + 0xc);
              break;
            case 0x58:
              puVar29 = auStack_370 + 10;
              auStack_370[10] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x00710034a050(plVar24,auStack_370 + 10);
              break;
            case 0x59:
              puVar29 = auStack_370 + 8;
              auStack_370[8] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x00710034a1b0(plVar24,auStack_370 + 8);
              break;
            case 0x5a:
              puVar29 = auStack_370 + 6;
              auStack_370[6] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x00710034a310(plVar24,auStack_370 + 6);
              break;
            case 0x5b:
              puVar29 = auStack_370 + 4;
              auStack_370[4] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x00710034a470(plVar24,auStack_370 + 4);
              break;
            case 0x5c:
              puVar29 = auStack_370 + 2;
              auStack_370[2] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x00710034a5d0(plVar24,auStack_370 + 2);
              break;
            case 0x5d:
              puVar29 = auStack_370;
              auStack_370[0] = fighter_num;
              add_idx_to_table1_and_table2(LoadedTables,fighter_num);
              func_0x00710034a730(plVar24,auStack_370);
              break;
            default:
              goto LAB_71002cc508;
            }
            unload_resource_by_filepathidx(LoadedTables,fighter_num);
            *puVar29 = 0xffffff;
LAB_71002cc508:
            *(undefined *)(*param_1 + 1) = 1;
            goto LAB_71002d1088;
          }
          pLVar16 = LoadedTables->loaded_data->arc;
                    /* WARNING: Load size is inaccurate */
          if ((pLVar16->fs_header->file_info_path_count <= fighter_num) ||
             ((long)pLVar16->file_paths[fighter_num].FileName.Hash != 0x156cbfba42))
          goto LAB_71002d1088;
          switch(*(undefined4 *)((long)param_1 + 0xc04)) {
          case 0:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x740);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd380;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd380:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x730);
              *(undefined8 **)(*plVar24 + 0x730) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x730),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x740);
              lVar27 = *(long *)(*plVar24 + 0x740);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x740);
            }
            goto LAB_71002ce5bc;
          case 1:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x790);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd424;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd424:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x780);
              *(undefined8 **)(*plVar24 + 0x780) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x780),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x790);
              lVar27 = *(long *)(*plVar24 + 0x790);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x790);
            }
            goto LAB_71002ce5bc;
          case 2:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x7e0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd4c8;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd4c8:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 2000);
              *(undefined8 **)(*plVar24 + 2000) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 2000),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x7e0);
              lVar27 = *(long *)(*plVar24 + 0x7e0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x7e0);
            }
            goto LAB_71002ce5bc;
          case 3:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x830);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd56c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd56c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x820);
              *(undefined8 **)(*plVar24 + 0x820) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x820),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x830);
              lVar27 = *(long *)(*plVar24 + 0x830);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x830);
            }
            goto LAB_71002ce5bc;
          case 4:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x880);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd610;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd610:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x870);
              *(undefined8 **)(*plVar24 + 0x870) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x870),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x880);
              lVar27 = *(long *)(*plVar24 + 0x880);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x880);
            }
            goto LAB_71002ce5bc;
          case 5:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x8d0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd6b4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd6b4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x8c0);
              *(undefined8 **)(*plVar24 + 0x8c0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x8c0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x8d0);
              lVar27 = *(long *)(*plVar24 + 0x8d0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x8d0);
            }
            goto LAB_71002ce5bc;
          case 6:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x920);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd758;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd758:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x910);
              *(undefined8 **)(*plVar24 + 0x910) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x910),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x920);
              lVar27 = *(long *)(*plVar24 + 0x920);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x920);
            }
            goto LAB_71002ce5bc;
          case 7:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x970);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd7fc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd7fc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x960);
              *(undefined8 **)(*plVar24 + 0x960) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x960),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x970);
              lVar27 = *(long *)(*plVar24 + 0x970);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x970);
            }
            goto LAB_71002ce5bc;
          case 8:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x9c0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd8a0;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd8a0:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x9b0);
              *(undefined8 **)(*plVar24 + 0x9b0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x9b0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x9c0);
              lVar27 = *(long *)(*plVar24 + 0x9c0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x9c0);
            }
            goto LAB_71002ce5bc;
          case 9:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xa10);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd944;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd944:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xa00);
              *(undefined8 **)(*plVar24 + 0xa00) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xa00),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xa10);
              lVar27 = *(long *)(*plVar24 + 0xa10);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xa10);
            }
            goto LAB_71002ce5bc;
          case 10:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xa60);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cd9e8;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cd9e8:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xa50);
              *(undefined8 **)(*plVar24 + 0xa50) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xa50),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xa60);
              lVar27 = *(long *)(*plVar24 + 0xa60);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xa60);
            }
            goto LAB_71002ce5bc;
          case 0xb:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xab0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cda8c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cda8c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xaa0);
              *(undefined8 **)(*plVar24 + 0xaa0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xaa0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xab0);
              lVar27 = *(long *)(*plVar24 + 0xab0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xab0);
            }
            goto LAB_71002ce5bc;
          case 0xc:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xb00);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cdb30;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cdb30:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xaf0);
              *(undefined8 **)(*plVar24 + 0xaf0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xaf0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xb00);
              lVar27 = *(long *)(*plVar24 + 0xb00);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xb00);
            }
            goto LAB_71002ce5bc;
          case 0xd:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xb50);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cdbd4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cdbd4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xb40);
              *(undefined8 **)(*plVar24 + 0xb40) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xb40),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xb50);
              lVar27 = *(long *)(*plVar24 + 0xb50);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xb50);
            }
            goto LAB_71002ce5bc;
          case 0xe:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xba0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cdc78;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cdc78:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xb90);
              *(undefined8 **)(*plVar24 + 0xb90) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xb90),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xba0);
              lVar27 = *(long *)(*plVar24 + 0xba0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xba0);
            }
            goto LAB_71002ce5bc;
          case 0xf:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xbf0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cdd1c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cdd1c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xbe0);
              *(undefined8 **)(*plVar24 + 0xbe0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xbe0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xbf0);
              lVar27 = *(long *)(*plVar24 + 0xbf0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xbf0);
            }
            goto LAB_71002ce5bc;
          case 0x10:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xc40);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cddc0;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cddc0:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xc30);
              *(undefined8 **)(*plVar24 + 0xc30) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xc30),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xc40);
              lVar27 = *(long *)(*plVar24 + 0xc40);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xc40);
            }
            goto LAB_71002ce5bc;
          case 0x11:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xc90);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cde64;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cde64:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xc80);
              *(undefined8 **)(*plVar24 + 0xc80) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xc80),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xc90);
              lVar27 = *(long *)(*plVar24 + 0xc90);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xc90);
            }
            goto LAB_71002ce5bc;
          case 0x12:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xce0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cdf08;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cdf08:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xcd0);
              *(undefined8 **)(*plVar24 + 0xcd0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xcd0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xce0);
              lVar27 = *(long *)(*plVar24 + 0xce0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xce0);
            }
            goto LAB_71002ce5bc;
          case 0x13:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xd30);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cdfac;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cdfac:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xd20);
              *(undefined8 **)(*plVar24 + 0xd20) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xd20),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xd30);
              lVar27 = *(long *)(*plVar24 + 0xd30);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xd30);
            }
            goto LAB_71002ce5bc;
          case 0x14:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xd80);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce050;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce050:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xd70);
              *(undefined8 **)(*plVar24 + 0xd70) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xd70),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xd80);
              lVar27 = *(long *)(*plVar24 + 0xd80);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xd80);
            }
            goto LAB_71002ce5bc;
          case 0x15:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xdd0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce0f4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce0f4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xdc0);
              *(undefined8 **)(*plVar24 + 0xdc0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xdc0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xdd0);
              lVar27 = *(long *)(*plVar24 + 0xdd0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xdd0);
            }
            goto LAB_71002ce5bc;
          case 0x16:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xe20);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce198;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce198:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xe10);
              *(undefined8 **)(*plVar24 + 0xe10) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xe10),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xe20);
              lVar27 = *(long *)(*plVar24 + 0xe20);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xe20);
            }
            goto LAB_71002ce5bc;
          case 0x17:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xe70);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce23c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce23c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xe60);
              *(undefined8 **)(*plVar24 + 0xe60) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xe60),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xe70);
              lVar27 = *(long *)(*plVar24 + 0xe70);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xe70);
            }
            goto LAB_71002ce5bc;
          case 0x18:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xec0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce2e0;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce2e0:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xeb0);
              *(undefined8 **)(*plVar24 + 0xeb0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xeb0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xec0);
              lVar27 = *(long *)(*plVar24 + 0xec0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xec0);
            }
            goto LAB_71002ce5bc;
          case 0x19:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xf10);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce384;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce384:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xf00);
              *(undefined8 **)(*plVar24 + 0xf00) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xf00),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xf10);
              lVar27 = *(long *)(*plVar24 + 0xf10);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xf10);
            }
            goto LAB_71002ce5bc;
          case 0x1a:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xf60);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce428;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce428:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xf50);
              *(undefined8 **)(*plVar24 + 0xf50) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xf50),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xf60);
              lVar27 = *(long *)(*plVar24 + 0xf60);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xf60);
            }
            goto LAB_71002ce5bc;
          case 0x1b:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0xfb0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce4cc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce4cc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 4000);
              *(undefined8 **)(*plVar24 + 4000) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 4000),fighter_num);
              plVar9 = (long *)(*plVar24 + 0xfb0);
              lVar27 = *(long *)(*plVar24 + 0xfb0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0xfb0);
            }
            goto LAB_71002ce5bc;
          case 0x1c:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x1000);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce570;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce570:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0xff0);
              *(undefined8 **)(*plVar24 + 0xff0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0xff0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x1000);
              lVar27 = *(long *)(*plVar24 + 0x1000);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x1000);
            }
LAB_71002ce5bc:
            *plVar9 = lVar27 + 1;
            goto LAB_71002d1074;
          case 0x1d:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001050 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce61c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce61c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001040 + *plVar24);
              *(undefined8 **)(&DAT_00001040 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001040 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001050 + *plVar24);
              lVar27 = *(long *)(&DAT_00001050 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001050 + *plVar24);
            }
            break;
          case 0x1e:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000010a0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce6c4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce6c4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001090 + *plVar24);
              *(undefined8 **)(&DAT_00001090 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001090 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000010a0 + *plVar24);
              lVar27 = *(long *)(&DAT_000010a0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000010a0 + *plVar24);
            }
            break;
          case 0x1f:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000010f0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce76c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce76c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000010e0 + *plVar24);
              *(undefined8 **)(&DAT_000010e0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000010e0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000010f0 + *plVar24);
              lVar27 = *(long *)(&DAT_000010f0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000010f0 + *plVar24);
            }
            break;
          case 0x20:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001140 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce814;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce814:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001130 + *plVar24);
              *(undefined8 **)(&DAT_00001130 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001130 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001140 + *plVar24);
              lVar27 = *(long *)(&DAT_00001140 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001140 + *plVar24);
            }
            break;
          case 0x21:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001190 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce8bc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce8bc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001180 + *plVar24);
              *(undefined8 **)(&DAT_00001180 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001180 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001190 + *plVar24);
              lVar27 = *(long *)(&DAT_00001190 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001190 + *plVar24);
            }
            break;
          case 0x22:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000011e0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ce964;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ce964:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000011d0 + *plVar24);
              *(undefined8 **)(&DAT_000011d0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000011d0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000011e0 + *plVar24);
              lVar27 = *(long *)(&DAT_000011e0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000011e0 + *plVar24);
            }
            break;
          case 0x23:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001230 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cea0c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cea0c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001220 + *plVar24);
              *(undefined8 **)(&DAT_00001220 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001220 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001230 + *plVar24);
              lVar27 = *(long *)(&DAT_00001230 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001230 + *plVar24);
            }
            break;
          case 0x24:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001280 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ceab4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ceab4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001270 + *plVar24);
              *(undefined8 **)(&DAT_00001270 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001270 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001280 + *plVar24);
              lVar27 = *(long *)(&DAT_00001280 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001280 + *plVar24);
            }
            break;
          case 0x25:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000012d0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ceb5c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ceb5c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000012c0 + *plVar24);
              *(undefined8 **)(&DAT_000012c0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000012c0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000012d0 + *plVar24);
              lVar27 = *(long *)(&DAT_000012d0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000012d0 + *plVar24);
            }
            break;
          case 0x26:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001320 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cec04;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cec04:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001310 + *plVar24);
              *(undefined8 **)(&DAT_00001310 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001310 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001320 + *plVar24);
              lVar27 = *(long *)(&DAT_00001320 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001320 + *plVar24);
            }
            break;
          case 0x27:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001370 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cecac;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cecac:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001360 + *plVar24);
              *(undefined8 **)(&DAT_00001360 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001360 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001370 + *plVar24);
              lVar27 = *(long *)(&DAT_00001370 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001370 + *plVar24);
            }
            break;
          case 0x28:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000013c0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ced54;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ced54:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000013b0 + *plVar24);
              *(undefined8 **)(&DAT_000013b0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000013b0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000013c0 + *plVar24);
              lVar27 = *(long *)(&DAT_000013c0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000013c0 + *plVar24);
            }
            break;
          case 0x29:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001410 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cedfc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cedfc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001400 + *plVar24);
              *(undefined8 **)(&DAT_00001400 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001400 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001410 + *plVar24);
              lVar27 = *(long *)(&DAT_00001410 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001410 + *plVar24);
            }
            break;
          case 0x2a:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001460 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ceea4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ceea4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001450 + *plVar24);
              *(undefined8 **)(&DAT_00001450 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001450 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001460 + *plVar24);
              lVar27 = *(long *)(&DAT_00001460 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001460 + *plVar24);
            }
            break;
          case 0x2b:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000014b0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cef4c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cef4c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000014a0 + *plVar24);
              *(undefined8 **)(&DAT_000014a0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000014a0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000014b0 + *plVar24);
              lVar27 = *(long *)(&DAT_000014b0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000014b0 + *plVar24);
            }
            break;
          case 0x2c:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001500 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002ceff4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002ceff4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000014f0 + *plVar24);
              *(undefined8 **)(&DAT_000014f0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000014f0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001500 + *plVar24);
              lVar27 = *(long *)(&DAT_00001500 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001500 + *plVar24);
            }
            break;
          case 0x2d:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001550 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf09c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf09c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001540 + *plVar24);
              *(undefined8 **)(&DAT_00001540 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001540 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001550 + *plVar24);
              lVar27 = *(long *)(&DAT_00001550 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001550 + *plVar24);
            }
            break;
          case 0x2e:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000015a0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf144;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf144:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001590 + *plVar24);
              *(undefined8 **)(&DAT_00001590 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001590 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000015a0 + *plVar24);
              lVar27 = *(long *)(&DAT_000015a0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000015a0 + *plVar24);
            }
            break;
          case 0x2f:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000015f0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf1ec;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf1ec:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000015e0 + *plVar24);
              *(undefined8 **)(&DAT_000015e0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000015e0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000015f0 + *plVar24);
              lVar27 = *(long *)(&DAT_000015f0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000015f0 + *plVar24);
            }
            break;
          case 0x30:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001640 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf294;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf294:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001630 + *plVar24);
              *(undefined8 **)(&DAT_00001630 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001630 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001640 + *plVar24);
              lVar27 = *(long *)(&DAT_00001640 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001640 + *plVar24);
            }
            break;
          case 0x31:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001690 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf33c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf33c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001680 + *plVar24);
              *(undefined8 **)(&DAT_00001680 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001680 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001690 + *plVar24);
              lVar27 = *(long *)(&DAT_00001690 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001690 + *plVar24);
            }
            break;
          case 0x32:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000016e0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf3e4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf3e4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000016d0 + *plVar24);
              *(undefined8 **)(&DAT_000016d0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000016d0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000016e0 + *plVar24);
              lVar27 = *(long *)(&DAT_000016e0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000016e0 + *plVar24);
            }
            break;
          case 0x33:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001730 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf48c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf48c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001720 + *plVar24);
              *(undefined8 **)(&DAT_00001720 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001720 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001730 + *plVar24);
              lVar27 = *(long *)(&DAT_00001730 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001730 + *plVar24);
            }
            break;
          case 0x34:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001780 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf534;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf534:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001770 + *plVar24);
              *(undefined8 **)(&DAT_00001770 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001770 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001780 + *plVar24);
              lVar27 = *(long *)(&DAT_00001780 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001780 + *plVar24);
            }
            break;
          case 0x35:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000017d0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf5dc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf5dc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000017c0 + *plVar24);
              *(undefined8 **)(&DAT_000017c0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000017c0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000017d0 + *plVar24);
              lVar27 = *(long *)(&DAT_000017d0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000017d0 + *plVar24);
            }
            break;
          case 0x36:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001820 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf684;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf684:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001810 + *plVar24);
              *(undefined8 **)(&DAT_00001810 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001810 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001820 + *plVar24);
              lVar27 = *(long *)(&DAT_00001820 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001820 + *plVar24);
            }
            break;
          case 0x37:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001870 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf72c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf72c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001860 + *plVar24);
              *(undefined8 **)(&DAT_00001860 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001860 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001870 + *plVar24);
              lVar27 = *(long *)(&DAT_00001870 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001870 + *plVar24);
            }
            break;
          case 0x38:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000018c0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf7d4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf7d4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000018b0 + *plVar24);
              *(undefined8 **)(&DAT_000018b0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000018b0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000018c0 + *plVar24);
              lVar27 = *(long *)(&DAT_000018c0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000018c0 + *plVar24);
            }
            break;
          case 0x39:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001910 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf87c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf87c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001900 + *plVar24);
              *(undefined8 **)(&DAT_00001900 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001900 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001910 + *plVar24);
              lVar27 = *(long *)(&DAT_00001910 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001910 + *plVar24);
            }
            break;
          case 0x3a:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001960 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf924;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf924:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001950 + *plVar24);
              *(undefined8 **)(&DAT_00001950 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001950 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001960 + *plVar24);
              lVar27 = *(long *)(&DAT_00001960 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001960 + *plVar24);
            }
            break;
          case 0x3b:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000019b0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cf9cc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cf9cc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000019a0 + *plVar24);
              *(undefined8 **)(&DAT_000019a0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000019a0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000019b0 + *plVar24);
              lVar27 = *(long *)(&DAT_000019b0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000019b0 + *plVar24);
            }
            break;
          case 0x3c:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001a00 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cfa74;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cfa74:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000019f0 + *plVar24);
              *(undefined8 **)(&DAT_000019f0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000019f0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001a00 + *plVar24);
              lVar27 = *(long *)(&DAT_00001a00 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001a00 + *plVar24);
            }
            break;
          case 0x3d:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001a50 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cfb1c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cfb1c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001a40 + *plVar24);
              *(undefined8 **)(&DAT_00001a40 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001a40 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001a50 + *plVar24);
              lVar27 = *(long *)(&DAT_00001a50 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001a50 + *plVar24);
            }
            break;
          case 0x3e:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001aa0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cfbc4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cfbc4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001a90 + *plVar24);
              *(undefined8 **)(&DAT_00001a90 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001a90 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001aa0 + *plVar24);
              lVar27 = *(long *)(&DAT_00001aa0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001aa0 + *plVar24);
            }
            break;
          case 0x3f:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001af0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cfc6c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cfc6c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001ae0 + *plVar24);
              *(undefined8 **)(&DAT_00001ae0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001ae0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001af0 + *plVar24);
              lVar27 = *(long *)(&DAT_00001af0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001af0 + *plVar24);
            }
            break;
          case 0x40:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001b40 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cfd14;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cfd14:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001b30 + *plVar24);
              *(undefined8 **)(&DAT_00001b30 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001b30 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001b40 + *plVar24);
              lVar27 = *(long *)(&DAT_00001b40 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001b40 + *plVar24);
            }
            break;
          case 0x41:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001b90 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cfdbc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cfdbc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001b80 + *plVar24);
              *(undefined8 **)(&DAT_00001b80 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001b80 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001b90 + *plVar24);
              lVar27 = *(long *)(&DAT_00001b90 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001b90 + *plVar24);
            }
            break;
          case 0x42:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001be0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cfe64;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cfe64:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001bd0 + *plVar24);
              *(undefined8 **)(&DAT_00001bd0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001bd0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001be0 + *plVar24);
              lVar27 = *(long *)(&DAT_00001be0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001be0 + *plVar24);
            }
            break;
          case 0x43:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001c30 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cff0c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cff0c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001c20 + *plVar24);
              *(undefined8 **)(&DAT_00001c20 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001c20 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001c30 + *plVar24);
              lVar27 = *(long *)(&DAT_00001c30 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001c30 + *plVar24);
            }
            break;
          case 0x44:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001c80 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002cffb4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002cffb4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001c70 + *plVar24);
              *(undefined8 **)(&DAT_00001c70 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001c70 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001c80 + *plVar24);
              lVar27 = *(long *)(&DAT_00001c80 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001c80 + *plVar24);
            }
            break;
          case 0x45:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001cd0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d005c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d005c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001cc0 + *plVar24);
              *(undefined8 **)(&DAT_00001cc0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001cc0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001cd0 + *plVar24);
              lVar27 = *(long *)(&DAT_00001cd0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001cd0 + *plVar24);
            }
            break;
          case 0x46:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001d20 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0104;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0104:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001d10 + *plVar24);
              *(undefined8 **)(&DAT_00001d10 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001d10 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001d20 + *plVar24);
              lVar27 = *(long *)(&DAT_00001d20 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001d20 + *plVar24);
            }
            break;
          case 0x47:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001d70 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d01ac;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d01ac:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001d60 + *plVar24);
              *(undefined8 **)(&DAT_00001d60 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001d60 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001d70 + *plVar24);
              lVar27 = *(long *)(&DAT_00001d70 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001d70 + *plVar24);
            }
            break;
          case 0x48:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001dc0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0254;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0254:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001db0 + *plVar24);
              *(undefined8 **)(&DAT_00001db0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001db0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001dc0 + *plVar24);
              lVar27 = *(long *)(&DAT_00001dc0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001dc0 + *plVar24);
            }
            break;
          case 0x49:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001e10 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d02fc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d02fc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x1e00);
              *(undefined8 **)(*plVar24 + 0x1e00) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x1e00),fighter_num);
              plVar9 = (long *)(&DAT_00001e10 + *plVar24);
              lVar27 = *(long *)(&DAT_00001e10 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001e10 + *plVar24);
            }
            break;
          case 0x4a:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001e60 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d03a4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d03a4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001e50 + *plVar24);
              *(undefined8 **)(&DAT_00001e50 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001e50 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001e60 + *plVar24);
              lVar27 = *(long *)(&DAT_00001e60 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001e60 + *plVar24);
            }
            break;
          case 0x4b:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001eb0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d044c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d044c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001ea0 + *plVar24);
              *(undefined8 **)(&DAT_00001ea0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001ea0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001eb0 + *plVar24);
              lVar27 = *(long *)(&DAT_00001eb0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001eb0 + *plVar24);
            }
            break;
          case 0x4c:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x1f00);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d04f4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d04f4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001ef0 + *plVar24);
              *(undefined8 **)(&DAT_00001ef0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001ef0 + *plVar24),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x1f00);
              lVar27 = *(long *)(*plVar24 + 0x1f00);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x1f00);
            }
            break;
          case 0x4d:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001f50 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d059c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d059c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001f40 + *plVar24);
              *(undefined8 **)(&DAT_00001f40 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001f40 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001f50 + *plVar24);
              lVar27 = *(long *)(&DAT_00001f50 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001f50 + *plVar24);
            }
            break;
          case 0x4e:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00001fa0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0644;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0644:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00001f90 + *plVar24);
              *(undefined8 **)(&DAT_00001f90 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00001f90 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00001fa0 + *plVar24);
              lVar27 = *(long *)(&DAT_00001fa0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00001fa0 + *plVar24);
            }
            break;
          case 0x4f:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(*plVar24 + 0x1ff0);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d06ec;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d06ec:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(*plVar24 + 0x1fe0);
              *(undefined8 **)(*plVar24 + 0x1fe0) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(*plVar24 + 0x1fe0),fighter_num);
              plVar9 = (long *)(*plVar24 + 0x1ff0);
              lVar27 = *(long *)(*plVar24 + 0x1ff0);
            }
            else {
              plVar9 = (long *)(*plVar24 + 0x1ff0);
            }
            break;
          case 0x50:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002040 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0794;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0794:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002030 + *plVar24);
              *(undefined8 **)(&DAT_00002030 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002030 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002040 + *plVar24);
              lVar27 = *(long *)(&DAT_00002040 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002040 + *plVar24);
            }
            break;
          case 0x51:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002090 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d083c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d083c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002080 + *plVar24);
              *(undefined8 **)(&DAT_00002080 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002080 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002090 + *plVar24);
              lVar27 = *(long *)(&DAT_00002090 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002090 + *plVar24);
            }
            break;
          case 0x52:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000020e0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d08e4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d08e4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000020d0 + *plVar24);
              *(undefined8 **)(&DAT_000020d0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000020d0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000020e0 + *plVar24);
              lVar27 = *(long *)(&DAT_000020e0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000020e0 + *plVar24);
            }
            break;
          case 0x53:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002130 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d098c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d098c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002120 + *plVar24);
              *(undefined8 **)(&DAT_00002120 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002120 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002130 + *plVar24);
              lVar27 = *(long *)(&DAT_00002130 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002130 + *plVar24);
            }
            break;
          case 0x54:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002180 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0a34;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0a34:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002170 + *plVar24);
              *(undefined8 **)(&DAT_00002170 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002170 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002180 + *plVar24);
              lVar27 = *(long *)(&DAT_00002180 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002180 + *plVar24);
            }
            break;
          case 0x55:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000021d0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0adc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0adc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000021c0 + *plVar24);
              *(undefined8 **)(&DAT_000021c0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000021c0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000021d0 + *plVar24);
              lVar27 = *(long *)(&DAT_000021d0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000021d0 + *plVar24);
            }
            break;
          case 0x56:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002220 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0b84;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0b84:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002210 + *plVar24);
              *(undefined8 **)(&DAT_00002210 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002210 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002220 + *plVar24);
              lVar27 = *(long *)(&DAT_00002220 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002220 + *plVar24);
            }
            break;
          case 0x57:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002270 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0c2c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0c2c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002260 + *plVar24);
              *(undefined8 **)(&DAT_00002260 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002260 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002270 + *plVar24);
              lVar27 = *(long *)(&DAT_00002270 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002270 + *plVar24);
            }
            break;
          case 0x58:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000022c0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0cd4;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0cd4:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000022b0 + *plVar24);
              *(undefined8 **)(&DAT_000022b0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000022b0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000022c0 + *plVar24);
              lVar27 = *(long *)(&DAT_000022c0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000022c0 + *plVar24);
            }
            break;
          case 0x59:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002310 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0d7c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0d7c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002300 + *plVar24);
              *(undefined8 **)(&DAT_00002300 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002300 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002310 + *plVar24);
              lVar27 = *(long *)(&DAT_00002310 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002310 + *plVar24);
            }
            break;
          case 0x5a:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002360 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0e24;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0e24:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002350 + *plVar24);
              *(undefined8 **)(&DAT_00002350 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002350 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002360 + *plVar24);
              lVar27 = *(long *)(&DAT_00002360 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002360 + *plVar24);
            }
            break;
          case 0x5b:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_000023b0 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0ecc;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0ecc:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000023a0 + *plVar24);
              *(undefined8 **)(&DAT_000023a0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000023a0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_000023b0 + *plVar24);
              lVar27 = *(long *)(&DAT_000023b0 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_000023b0 + *plVar24);
            }
            break;
          case 0x5c:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002400 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d0f74;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d0f74:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_000023f0 + *plVar24);
              *(undefined8 **)(&DAT_000023f0 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_000023f0 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002400 + *plVar24);
              lVar27 = *(long *)(&DAT_00002400 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002400 + *plVar24);
            }
            break;
          case 0x5d:
            add_idx_to_table1_and_table2(LoadedTables,fighter_num);
            lVar27 = *(long *)(&DAT_00002450 + *plVar24);
            if (lVar27 == 0) {
              puVar12 = (undefined8 *)jemalloc(0x10,0x20);
              if (puVar12 == (undefined8 *)0x0) {
                if (GlobalAllocator != (void *)0x0) {
                  local_64 = 0;
                  local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
                  uVar15 = (**(code **)(*GlobalAllocator + 0x30))
                                     (GlobalAllocator,&local_64,local_80);
                  if (((uVar15 & 1) != 0) &&
                     (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
                  goto LAB_71002d101c;
                }
                puVar12 = (undefined8 *)0x0;
              }
LAB_71002d101c:
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = &PTR_FUN_7104f60108;
              puVar12[1] = 0;
              plVar9 = *(long **)(&DAT_00002440 + *plVar24);
              *(undefined8 **)(&DAT_00002440 + *plVar24) = puVar12;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              read_param_file(*(ParamContainer **)(&DAT_00002440 + *plVar24),fighter_num);
              plVar9 = (long *)(&DAT_00002450 + *plVar24);
              lVar27 = *(long *)(&DAT_00002450 + *plVar24);
            }
            else {
              plVar9 = (long *)(&DAT_00002450 + *plVar24);
            }
            break;
          default:
            goto LAB_71002d1080;
          }
          *plVar9 = lVar27 + 1;
LAB_71002d1074:
          unload_resource_by_filepathidx(LoadedTables,fighter_num);
LAB_71002d1080:
          *(undefined *)((long)*param_1 + 9) = 1;
LAB_71002d1088:
          unload_resource_by_filepathidx(LoadedTables,fighter_num);
LAB_71002d1094:
          pLVar19 = LoadedTables->loaded_data->search;
          uVar15 = uVar7 >> 0x28;
          fighter_num = (uint)(uVar7 >> 0x20);
          uVar13 = fighter_num >> 8;
          uVar23 = 0xffffffffffffffff;
          if (uVar13 != 0xffffff) {
            uVar1 = pLVar19->body->idx_length;
            uVar23 = 0xffffffffffffffff;
            if (uVar13 <= uVar1 && uVar1 != fighter_num >> 8) {
              if (pLVar19->idx_to_path_group_idx != (uint *)0x0) {
                fighter_num = pLVar19->idx_to_path_group_idx[uVar15];
                uVar15 = (ulong)fighter_num;
                uVar23 = 0xffffffffffffffff;
                if (fighter_num == 0xffffff) goto LAB_71002d1124;
              }
              uVar23 = 0xffffffffffffffff;
              if ((uint)uVar15 < pLVar19->body->path_group_length) {
                if (pLVar19->path_group + uVar15 == (HashGroup *)0x0) {
                  uVar23 = 0xffffffffffffffff;
                }
                else {
                    /* WARNING: Load size is inaccurate */
                  HVar17._0_8_ = pLVar19->path_group[uVar15].path.Hash;
                  fighter_num = (uint)((ulong)HVar17._0_8_ >> 0x20);
                  uVar13 = fighter_num >> 8;
                  bVar4 = false;
                  if (uVar13 != 0xffffff) {
                    bVar4 = uVar1 == fighter_num >> 8;
                  }
                  uVar23 = 0xffffffffffffffff;
                  if ((uVar13 != 0xffffff && uVar13 <= uVar1) && !bVar4) {
                    uVar23 = (ulong)HVar17._0_8_ & 0xffffff0000000000 | uVar7 & 0xffffffffff;
                  }
                }
              }
            }
          }
LAB_71002d1124:
          uVar7 = uVar23 >> 0x28;
          fighter_num = (uint)(uVar23 >> 0x20);
          uVar13 = fighter_num >> 8;
          if (uVar13 == 0xffffff) {
            local_80[0].internal = (void *)(uVar23 & 0xffffffffff);
            puVar11 = (ulong *)bsearch(local_80,pLVar19->file_path_to_idx,
                                       (ulong)pLVar19->body->file_path_length,8,
                                       (__compar_fn_t)&LAB_7103541260);
            if ((puVar11 == (ulong *)0x0) || (uVar7 = *puVar11 >> 0x28, uVar7 == 0xffffff)) break;
            pHVar18 = pLVar19->idx_to_group;
          }
          else {
            uVar1 = pLVar19->body->idx_length;
            if ((uVar1 < uVar13 || uVar1 == fighter_num >> 8) ||
               (((pLVar19->idx_to_path_group_idx != (uint *)0x0 &&
                 (fighter_num = pLVar19->idx_to_path_group_idx[uVar7], uVar7 = (ulong)fighter_num,
                 fighter_num == 0xffffff)) || (pLVar19->body->path_group_length <= (uint)uVar7))))
            break;
            pHVar18 = pLVar19->path_group;
          }
          pHVar18 = pHVar18 + uVar7;
          uVar7 = uVar23;
        }
      }
    }
    else {
      uVar1 = pLVar19->body->idx_length;
      if ((uVar13 <= uVar1 && uVar1 != fighter_num >> 8) &&
         (((pLVar19->idx_to_path_group_idx == (uint *)0x0 ||
           (fighter_num = pLVar19->idx_to_path_group_idx[uVar15], uVar15 = (ulong)fighter_num,
           fighter_num != 0xffffff)) && ((uint)uVar15 < pLVar19->body->path_group_length)))) {
        pHVar18 = pLVar19->path_group + uVar15;
        goto joined_r0x0071002cb4d4;
      }
    }
  }
  plVar24 = DAT_71052b50e8;
  if (*(char *)(*param_1 + 1) == '\0') {
    switch(*(undefined4 *)((long)param_1 + 0xc04)) {
    case 0:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_378[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100342830(DAT_71052b50e8,auStack_378);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100342830(plVar24,auStack_378);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_378[0] = 0xffffff;
      }
      break;
    case 1:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_380[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100342980(DAT_71052b50e8,auStack_380);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100342980(plVar24,auStack_380);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_380[0] = 0xffffff;
      }
      break;
    case 2:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_388[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100342ad0(DAT_71052b50e8,auStack_388);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100342ad0(plVar24,auStack_388);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_388[0] = 0xffffff;
      }
      break;
    case 3:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_390[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100342c20(DAT_71052b50e8,auStack_390);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100342c20(plVar24,auStack_390);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_390[0] = 0xffffff;
      }
      break;
    case 4:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_398[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100342d70(DAT_71052b50e8,auStack_398);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100342d70(plVar24,auStack_398);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_398[0] = 0xffffff;
      }
      break;
    case 5:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3a0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100342ec0(DAT_71052b50e8,auStack_3a0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100342ec0(plVar24,auStack_3a0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3a0[0] = 0xffffff;
      }
      break;
    case 6:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3a8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343010(DAT_71052b50e8,auStack_3a8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343010(plVar24,auStack_3a8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3a8[0] = 0xffffff;
      }
      break;
    case 7:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3b0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343160(DAT_71052b50e8,auStack_3b0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343160(plVar24,auStack_3b0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3b0[0] = 0xffffff;
      }
      break;
    case 8:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3b8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003432b0(DAT_71052b50e8,auStack_3b8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003432b0(plVar24,auStack_3b8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3b8[0] = 0xffffff;
      }
      break;
    case 9:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3c0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343400(DAT_71052b50e8,auStack_3c0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343400(plVar24,auStack_3c0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3c0[0] = 0xffffff;
      }
      break;
    case 10:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3c8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343550(DAT_71052b50e8,auStack_3c8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343550(plVar24,auStack_3c8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3c8[0] = 0xffffff;
      }
      break;
    case 0xb:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3d0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003436a0(DAT_71052b50e8,auStack_3d0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003436a0(plVar24,auStack_3d0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3d0[0] = 0xffffff;
      }
      break;
    case 0xc:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3d8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003437f0(DAT_71052b50e8,auStack_3d8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003437f0(plVar24,auStack_3d8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3d8[0] = 0xffffff;
      }
      break;
    case 0xd:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3e0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343940(DAT_71052b50e8,auStack_3e0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343940(plVar24,auStack_3e0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3e0[0] = 0xffffff;
      }
      break;
    case 0xe:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3e8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343a90(DAT_71052b50e8,auStack_3e8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343a90(plVar24,auStack_3e8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3e8[0] = 0xffffff;
      }
      break;
    case 0xf:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3f0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343be0(DAT_71052b50e8,auStack_3f0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343be0(plVar24,auStack_3f0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3f0[0] = 0xffffff;
      }
      break;
    case 0x10:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_3f8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343d30(DAT_71052b50e8,auStack_3f8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343d30(plVar24,auStack_3f8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_3f8[0] = 0xffffff;
      }
      break;
    case 0x11:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_400[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343e80(DAT_71052b50e8,auStack_400);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343e80(plVar24,auStack_400);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_400[0] = 0xffffff;
      }
      break;
    case 0x12:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_408[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100343fd0(DAT_71052b50e8,auStack_408);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100343fd0(plVar24,auStack_408);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_408[0] = 0xffffff;
      }
      break;
    case 0x13:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_410[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344120(DAT_71052b50e8,auStack_410);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344120(plVar24,auStack_410);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_410[0] = 0xffffff;
      }
      break;
    case 0x14:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_418[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344270(DAT_71052b50e8,auStack_418);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344270(plVar24,auStack_418);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_418[0] = 0xffffff;
      }
      break;
    case 0x15:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_420[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003443c0(DAT_71052b50e8,auStack_420);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003443c0(plVar24,auStack_420);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_420[0] = 0xffffff;
      }
      break;
    case 0x16:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_428[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344510(DAT_71052b50e8,auStack_428);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344510(plVar24,auStack_428);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_428[0] = 0xffffff;
      }
      break;
    case 0x17:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_430[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344660(DAT_71052b50e8,auStack_430);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344660(plVar24,auStack_430);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_430[0] = 0xffffff;
      }
      break;
    case 0x18:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_438[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003447b0(DAT_71052b50e8,auStack_438);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003447b0(plVar24,auStack_438);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_438[0] = 0xffffff;
      }
      break;
    case 0x19:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_440[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344900(DAT_71052b50e8,auStack_440);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344900(plVar24,auStack_440);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_440[0] = 0xffffff;
      }
      break;
    case 0x1a:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_448[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344a50(DAT_71052b50e8,auStack_448);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344a50(plVar24,auStack_448);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_448[0] = 0xffffff;
      }
      break;
    case 0x1b:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_450[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344ba0(DAT_71052b50e8,auStack_450);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344ba0(plVar24,auStack_450);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_450[0] = 0xffffff;
      }
      break;
    case 0x1c:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_458[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344cf0(DAT_71052b50e8,auStack_458);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344cf0(plVar24,auStack_458);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_458[0] = 0xffffff;
      }
      break;
    case 0x1d:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_460[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344e40(DAT_71052b50e8,auStack_460);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344e40(plVar24,auStack_460);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_460[0] = 0xffffff;
      }
      break;
    case 0x1e:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_468[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100344fa0(DAT_71052b50e8,auStack_468);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100344fa0(plVar24,auStack_468);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_468[0] = 0xffffff;
      }
      break;
    case 0x1f:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_470[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345100(DAT_71052b50e8,auStack_470);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345100(plVar24,auStack_470);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_470[0] = 0xffffff;
      }
      break;
    case 0x20:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_478[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345260(DAT_71052b50e8,auStack_478);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345260(plVar24,auStack_478);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_478[0] = 0xffffff;
      }
      break;
    case 0x21:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_480[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003453c0(DAT_71052b50e8,auStack_480);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003453c0(plVar24,auStack_480);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_480[0] = 0xffffff;
      }
      break;
    case 0x22:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_488[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345520(DAT_71052b50e8,auStack_488);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345520(plVar24,auStack_488);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_488[0] = 0xffffff;
      }
      break;
    case 0x23:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_490[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345680(DAT_71052b50e8,auStack_490);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345680(plVar24,auStack_490);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_490[0] = 0xffffff;
      }
      break;
    case 0x24:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_498[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003457e0(DAT_71052b50e8,auStack_498);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003457e0(plVar24,auStack_498);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_498[0] = 0xffffff;
      }
      break;
    case 0x25:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4a0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345940(DAT_71052b50e8,auStack_4a0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345940(plVar24,auStack_4a0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4a0[0] = 0xffffff;
      }
      break;
    case 0x26:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4a8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345aa0(DAT_71052b50e8,auStack_4a8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345aa0(plVar24,auStack_4a8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4a8[0] = 0xffffff;
      }
      break;
    case 0x27:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4b0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345c00(DAT_71052b50e8,auStack_4b0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345c00(plVar24,auStack_4b0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4b0[0] = 0xffffff;
      }
      break;
    case 0x28:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4b8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345d60(DAT_71052b50e8,auStack_4b8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345d60(plVar24,auStack_4b8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4b8[0] = 0xffffff;
      }
      break;
    case 0x29:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4c0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100345ec0(DAT_71052b50e8,auStack_4c0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100345ec0(plVar24,auStack_4c0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4c0[0] = 0xffffff;
      }
      break;
    case 0x2a:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4c8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346020(DAT_71052b50e8,auStack_4c8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346020(plVar24,auStack_4c8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4c8[0] = 0xffffff;
      }
      break;
    case 0x2b:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4d0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346180(DAT_71052b50e8,auStack_4d0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346180(plVar24,auStack_4d0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4d0[0] = 0xffffff;
      }
      break;
    case 0x2c:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4d8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003462e0(DAT_71052b50e8,auStack_4d8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003462e0(plVar24,auStack_4d8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4d8[0] = 0xffffff;
      }
      break;
    case 0x2d:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4e0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346440(DAT_71052b50e8,auStack_4e0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346440(plVar24,auStack_4e0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4e0[0] = 0xffffff;
      }
      break;
    case 0x2e:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4e8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003465a0(DAT_71052b50e8,auStack_4e8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003465a0(plVar24,auStack_4e8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4e8[0] = 0xffffff;
      }
      break;
    case 0x2f:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4f0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346700(DAT_71052b50e8,auStack_4f0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346700(plVar24,auStack_4f0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4f0[0] = 0xffffff;
      }
      break;
    case 0x30:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_4f8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346860(DAT_71052b50e8,auStack_4f8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346860(plVar24,auStack_4f8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_4f8[0] = 0xffffff;
      }
      break;
    case 0x31:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_500[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003469c0(DAT_71052b50e8,auStack_500);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003469c0(plVar24,auStack_500);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_500[0] = 0xffffff;
      }
      break;
    case 0x32:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_508[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346b20(DAT_71052b50e8,auStack_508);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346b20(plVar24,auStack_508);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_508[0] = 0xffffff;
      }
      break;
    case 0x33:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_510[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346c80(DAT_71052b50e8,auStack_510);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346c80(plVar24,auStack_510);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_510[0] = 0xffffff;
      }
      break;
    case 0x34:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_518[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346de0(DAT_71052b50e8,auStack_518);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346de0(plVar24,auStack_518);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_518[0] = 0xffffff;
      }
      break;
    case 0x35:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_520[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100346f40(DAT_71052b50e8,auStack_520);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100346f40(plVar24,auStack_520);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_520[0] = 0xffffff;
      }
      break;
    case 0x36:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_528[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003470a0(DAT_71052b50e8,auStack_528);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003470a0(plVar24,auStack_528);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_528[0] = 0xffffff;
      }
      break;
    case 0x37:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_530[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347200(DAT_71052b50e8,auStack_530);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347200(plVar24,auStack_530);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_530[0] = 0xffffff;
      }
      break;
    case 0x38:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_538[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347360(DAT_71052b50e8,auStack_538);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347360(plVar24,auStack_538);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_538[0] = 0xffffff;
      }
      break;
    case 0x39:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_540[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003474c0(DAT_71052b50e8,auStack_540);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003474c0(plVar24,auStack_540);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_540[0] = 0xffffff;
      }
      break;
    case 0x3a:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_548[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347620(DAT_71052b50e8,auStack_548);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347620(plVar24,auStack_548);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_548[0] = 0xffffff;
      }
      break;
    case 0x3b:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_550[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347780(DAT_71052b50e8,auStack_550);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347780(plVar24,auStack_550);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_550[0] = 0xffffff;
      }
      break;
    case 0x3c:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_558[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003478e0(DAT_71052b50e8,auStack_558);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003478e0(plVar24,auStack_558);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_558[0] = 0xffffff;
      }
      break;
    case 0x3d:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_560[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347a40(DAT_71052b50e8,auStack_560);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347a40(plVar24,auStack_560);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_560[0] = 0xffffff;
      }
      break;
    case 0x3e:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_568[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347ba0(DAT_71052b50e8,auStack_568);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347ba0(plVar24,auStack_568);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_568[0] = 0xffffff;
      }
      break;
    case 0x3f:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_570[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347d00(DAT_71052b50e8,auStack_570);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347d00(plVar24,auStack_570);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_570[0] = 0xffffff;
      }
      break;
    case 0x40:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_578[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347e60(DAT_71052b50e8,auStack_578);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347e60(plVar24,auStack_578);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_578[0] = 0xffffff;
      }
      break;
    case 0x41:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_580[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100347fc0(DAT_71052b50e8,auStack_580);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100347fc0(plVar24,auStack_580);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_580[0] = 0xffffff;
      }
      break;
    case 0x42:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_588[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348120(DAT_71052b50e8,auStack_588);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348120(plVar24,auStack_588);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_588[0] = 0xffffff;
      }
      break;
    case 0x43:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_590[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348280(DAT_71052b50e8,auStack_590);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348280(plVar24,auStack_590);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_590[0] = 0xffffff;
      }
      break;
    case 0x44:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_598[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003483e0(DAT_71052b50e8,auStack_598);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003483e0(plVar24,auStack_598);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_598[0] = 0xffffff;
      }
      break;
    case 0x45:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5a0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348540(DAT_71052b50e8,auStack_5a0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348540(plVar24,auStack_5a0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5a0[0] = 0xffffff;
      }
      break;
    case 0x46:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5a8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003486a0(DAT_71052b50e8,auStack_5a8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003486a0(plVar24,auStack_5a8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5a8[0] = 0xffffff;
      }
      break;
    case 0x47:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5b0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348800(DAT_71052b50e8,auStack_5b0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348800(plVar24,auStack_5b0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5b0[0] = 0xffffff;
      }
      break;
    case 0x48:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5b8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348960(DAT_71052b50e8,auStack_5b8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348960(plVar24,auStack_5b8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5b8[0] = 0xffffff;
      }
      break;
    case 0x49:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5c0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348ac0(DAT_71052b50e8,auStack_5c0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348ac0(plVar24,auStack_5c0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5c0[0] = 0xffffff;
      }
      break;
    case 0x4a:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5c8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348c20(DAT_71052b50e8,auStack_5c8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348c20(plVar24,auStack_5c8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5c8[0] = 0xffffff;
      }
      break;
    case 0x4b:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5d0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348d80(DAT_71052b50e8,auStack_5d0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348d80(plVar24,auStack_5d0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5d0[0] = 0xffffff;
      }
      break;
    case 0x4c:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5d8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100348ee0(DAT_71052b50e8,auStack_5d8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100348ee0(plVar24,auStack_5d8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5d8[0] = 0xffffff;
      }
      break;
    case 0x4d:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5e0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100349040(DAT_71052b50e8,auStack_5e0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100349040(plVar24,auStack_5e0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5e0[0] = 0xffffff;
      }
      break;
    case 0x4e:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5e8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003491a0(DAT_71052b50e8,auStack_5e8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003491a0(plVar24,auStack_5e8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5e8[0] = 0xffffff;
      }
      break;
    case 0x4f:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5f0[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100349300(DAT_71052b50e8,auStack_5f0);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100349300(plVar24,auStack_5f0);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5f0[0] = 0xffffff;
      }
      break;
    case 0x50:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_5f8[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100349460(DAT_71052b50e8,auStack_5f8);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100349460(plVar24,auStack_5f8);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_5f8[0] = 0xffffff;
      }
      break;
    case 0x51:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_600[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003495c0(DAT_71052b50e8,auStack_600);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003495c0(plVar24,auStack_600);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_600[0] = 0xffffff;
      }
      break;
    case 0x52:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_608[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100349720(DAT_71052b50e8,auStack_608);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100349720(plVar24,auStack_608);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_608[0] = 0xffffff;
      }
      break;
    case 0x53:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_610[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100349880(DAT_71052b50e8,auStack_610);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100349880(plVar24,auStack_610);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_610[0] = 0xffffff;
      }
      break;
    case 0x54:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_618[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x0071003499e0(DAT_71052b50e8,auStack_618);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x0071003499e0(plVar24,auStack_618);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_618[0] = 0xffffff;
      }
      break;
    case 0x55:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_620[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100349b40(DAT_71052b50e8,auStack_620);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100349b40(plVar24,auStack_620);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_620[0] = 0xffffff;
      }
      break;
    case 0x56:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_628[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100349d90(DAT_71052b50e8,auStack_628);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100349d90(plVar24,auStack_628);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_628[0] = 0xffffff;
      }
      break;
    case 0x57:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_630[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x007100349ef0(DAT_71052b50e8,auStack_630);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x007100349ef0(plVar24,auStack_630);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_630[0] = 0xffffff;
      }
      break;
    case 0x58:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_638[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x00710034a050(DAT_71052b50e8,auStack_638);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x00710034a050(plVar24,auStack_638);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_638[0] = 0xffffff;
      }
      break;
    case 0x59:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_640[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x00710034a1b0(DAT_71052b50e8,auStack_640);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x00710034a1b0(plVar24,auStack_640);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_640[0] = 0xffffff;
      }
      break;
    case 0x5a:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_648[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x00710034a310(DAT_71052b50e8,auStack_648);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x00710034a310(plVar24,auStack_648);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_648[0] = 0xffffff;
      }
      break;
    case 0x5b:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_650[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x00710034a470(DAT_71052b50e8,auStack_650);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x00710034a470(plVar24,auStack_650);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_650[0] = 0xffffff;
      }
      break;
    case 0x5c:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_658[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x00710034a5d0(DAT_71052b50e8,auStack_658);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x00710034a5d0(plVar24,auStack_658);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_658[0] = 0xffffff;
      }
      break;
    case 0x5d:
      fighter_num = *(uint *)(*DAT_71052b50e8 + 0x18);
      auStack_660[0] = fighter_num;
      if (fighter_num == 0xffffff) {
        func_0x00710034a730(DAT_71052b50e8,auStack_660);
      }
      else {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        func_0x00710034a730(plVar24,auStack_660);
        unload_resource_by_filepathidx(LoadedTables,fighter_num);
        auStack_660[0] = 0xffffff;
      }
    }
  }
  plVar24 = DAT_71052b50e8;
  if (*(char *)((long)*param_1 + 9) == '\0') {
    switch(*(undefined4 *)((long)param_1 + 0xc04)) {
    case 0:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x740);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d4e20;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d4e20:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x730);
        *(undefined8 **)(*plVar24 + 0x730) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x730),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x740);
        lVar28 = *(long *)(*plVar24 + 0x740);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x740);
      }
      break;
    case 1:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x790);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d4ec4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d4ec4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x780);
        *(undefined8 **)(*plVar24 + 0x780) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x780),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x790);
        lVar28 = *(long *)(*plVar24 + 0x790);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x790);
      }
      break;
    case 2:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x7e0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d4f68;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d4f68:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 2000);
        *(undefined8 **)(*plVar24 + 2000) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 2000),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x7e0);
        lVar28 = *(long *)(*plVar24 + 0x7e0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x7e0);
      }
      break;
    case 3:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x830);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d500c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d500c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x820);
        *(undefined8 **)(*plVar24 + 0x820) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x820),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x830);
        lVar28 = *(long *)(*plVar24 + 0x830);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x830);
      }
      break;
    case 4:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x880);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d50b0;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d50b0:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x870);
        *(undefined8 **)(*plVar24 + 0x870) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x870),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x880);
        lVar28 = *(long *)(*plVar24 + 0x880);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x880);
      }
      break;
    case 5:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x8d0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5154;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5154:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x8c0);
        *(undefined8 **)(*plVar24 + 0x8c0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x8c0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x8d0);
        lVar28 = *(long *)(*plVar24 + 0x8d0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x8d0);
      }
      break;
    case 6:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x920);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d51f8;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d51f8:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x910);
        *(undefined8 **)(*plVar24 + 0x910) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x910),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x920);
        lVar28 = *(long *)(*plVar24 + 0x920);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x920);
      }
      break;
    case 7:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x970);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d529c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d529c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x960);
        *(undefined8 **)(*plVar24 + 0x960) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x960),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x970);
        lVar28 = *(long *)(*plVar24 + 0x970);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x970);
      }
      break;
    case 8:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x9c0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5340;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5340:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x9b0);
        *(undefined8 **)(*plVar24 + 0x9b0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x9b0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x9c0);
        lVar28 = *(long *)(*plVar24 + 0x9c0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x9c0);
      }
      break;
    case 9:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xa10);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d53e4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d53e4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xa00);
        *(undefined8 **)(*plVar24 + 0xa00) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xa00),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xa10);
        lVar28 = *(long *)(*plVar24 + 0xa10);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xa10);
      }
      break;
    case 10:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xa60);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5488;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5488:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xa50);
        *(undefined8 **)(*plVar24 + 0xa50) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xa50),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xa60);
        lVar28 = *(long *)(*plVar24 + 0xa60);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xa60);
      }
      break;
    case 0xb:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xab0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d552c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d552c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xaa0);
        *(undefined8 **)(*plVar24 + 0xaa0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xaa0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xab0);
        lVar28 = *(long *)(*plVar24 + 0xab0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xab0);
      }
      break;
    case 0xc:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xb00);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d55d0;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d55d0:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xaf0);
        *(undefined8 **)(*plVar24 + 0xaf0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xaf0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xb00);
        lVar28 = *(long *)(*plVar24 + 0xb00);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xb00);
      }
      break;
    case 0xd:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xb50);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5674;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5674:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xb40);
        *(undefined8 **)(*plVar24 + 0xb40) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xb40),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xb50);
        lVar28 = *(long *)(*plVar24 + 0xb50);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xb50);
      }
      break;
    case 0xe:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xba0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5718;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5718:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xb90);
        *(undefined8 **)(*plVar24 + 0xb90) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xb90),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xba0);
        lVar28 = *(long *)(*plVar24 + 0xba0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xba0);
      }
      break;
    case 0xf:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xbf0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d57bc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d57bc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xbe0);
        *(undefined8 **)(*plVar24 + 0xbe0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xbe0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xbf0);
        lVar28 = *(long *)(*plVar24 + 0xbf0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xbf0);
      }
      break;
    case 0x10:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xc40);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5860;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5860:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xc30);
        *(undefined8 **)(*plVar24 + 0xc30) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xc30),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xc40);
        lVar28 = *(long *)(*plVar24 + 0xc40);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xc40);
      }
      break;
    case 0x11:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xc90);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5904;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5904:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xc80);
        *(undefined8 **)(*plVar24 + 0xc80) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xc80),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xc90);
        lVar28 = *(long *)(*plVar24 + 0xc90);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xc90);
      }
      break;
    case 0x12:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xce0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d59a8;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d59a8:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xcd0);
        *(undefined8 **)(*plVar24 + 0xcd0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xcd0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xce0);
        lVar28 = *(long *)(*plVar24 + 0xce0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xce0);
      }
      break;
    case 0x13:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xd30);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5a4c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5a4c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xd20);
        *(undefined8 **)(*plVar24 + 0xd20) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xd20),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xd30);
        lVar28 = *(long *)(*plVar24 + 0xd30);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xd30);
      }
      break;
    case 0x14:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xd80);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5af0;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5af0:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xd70);
        *(undefined8 **)(*plVar24 + 0xd70) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xd70),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xd80);
        lVar28 = *(long *)(*plVar24 + 0xd80);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xd80);
      }
      break;
    case 0x15:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xdd0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5b94;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5b94:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xdc0);
        *(undefined8 **)(*plVar24 + 0xdc0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xdc0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xdd0);
        lVar28 = *(long *)(*plVar24 + 0xdd0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xdd0);
      }
      break;
    case 0x16:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xe20);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5c38;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5c38:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xe10);
        *(undefined8 **)(*plVar24 + 0xe10) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xe10),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xe20);
        lVar28 = *(long *)(*plVar24 + 0xe20);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xe20);
      }
      break;
    case 0x17:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xe70);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5cdc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5cdc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xe60);
        *(undefined8 **)(*plVar24 + 0xe60) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xe60),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xe70);
        lVar28 = *(long *)(*plVar24 + 0xe70);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xe70);
      }
      break;
    case 0x18:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xec0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5d80;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5d80:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xeb0);
        *(undefined8 **)(*plVar24 + 0xeb0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xeb0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xec0);
        lVar28 = *(long *)(*plVar24 + 0xec0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xec0);
      }
      break;
    case 0x19:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xf10);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5e24;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5e24:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xf00);
        *(undefined8 **)(*plVar24 + 0xf00) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xf00),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xf10);
        lVar28 = *(long *)(*plVar24 + 0xf10);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xf10);
      }
      break;
    case 0x1a:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xf60);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5ec8;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5ec8:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xf50);
        *(undefined8 **)(*plVar24 + 0xf50) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xf50),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xf60);
        lVar28 = *(long *)(*plVar24 + 0xf60);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xf60);
      }
      break;
    case 0x1b:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0xfb0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d5f6c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d5f6c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 4000);
        *(undefined8 **)(*plVar24 + 4000) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 4000),fighter_num);
        plVar9 = (long *)(*plVar24 + 0xfb0);
        lVar28 = *(long *)(*plVar24 + 0xfb0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0xfb0);
      }
      break;
    case 0x1c:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x1000);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6010;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6010:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0xff0);
        *(undefined8 **)(*plVar24 + 0xff0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0xff0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x1000);
        lVar28 = *(long *)(*plVar24 + 0x1000);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x1000);
      }
      break;
    case 0x1d:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001050 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d60b4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d60b4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001040 + *plVar24);
        *(undefined8 **)(&DAT_00001040 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001040 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001050 + *plVar24);
        lVar28 = *(long *)(&DAT_00001050 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001050 + lVar27);
      }
      break;
    case 0x1e:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000010a0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d615c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d615c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001090 + *plVar24);
        *(undefined8 **)(&DAT_00001090 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001090 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000010a0 + *plVar24);
        lVar28 = *(long *)(&DAT_000010a0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000010a0 + lVar27);
      }
      break;
    case 0x1f:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000010f0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6204;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6204:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000010e0 + *plVar24);
        *(undefined8 **)(&DAT_000010e0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000010e0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000010f0 + *plVar24);
        lVar28 = *(long *)(&DAT_000010f0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000010f0 + lVar27);
      }
      break;
    case 0x20:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001140 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d62ac;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d62ac:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001130 + *plVar24);
        *(undefined8 **)(&DAT_00001130 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001130 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001140 + *plVar24);
        lVar28 = *(long *)(&DAT_00001140 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001140 + lVar27);
      }
      break;
    case 0x21:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001190 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6354;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6354:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001180 + *plVar24);
        *(undefined8 **)(&DAT_00001180 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001180 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001190 + *plVar24);
        lVar28 = *(long *)(&DAT_00001190 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001190 + lVar27);
      }
      break;
    case 0x22:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000011e0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d63fc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d63fc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000011d0 + *plVar24);
        *(undefined8 **)(&DAT_000011d0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000011d0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000011e0 + *plVar24);
        lVar28 = *(long *)(&DAT_000011e0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000011e0 + lVar27);
      }
      break;
    case 0x23:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001230 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d64a4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d64a4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001220 + *plVar24);
        *(undefined8 **)(&DAT_00001220 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001220 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001230 + *plVar24);
        lVar28 = *(long *)(&DAT_00001230 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001230 + lVar27);
      }
      break;
    case 0x24:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001280 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d654c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d654c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001270 + *plVar24);
        *(undefined8 **)(&DAT_00001270 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001270 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001280 + *plVar24);
        lVar28 = *(long *)(&DAT_00001280 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001280 + lVar27);
      }
      break;
    case 0x25:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000012d0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d65f4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d65f4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000012c0 + *plVar24);
        *(undefined8 **)(&DAT_000012c0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000012c0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000012d0 + *plVar24);
        lVar28 = *(long *)(&DAT_000012d0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000012d0 + lVar27);
      }
      break;
    case 0x26:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001320 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d669c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d669c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001310 + *plVar24);
        *(undefined8 **)(&DAT_00001310 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001310 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001320 + *plVar24);
        lVar28 = *(long *)(&DAT_00001320 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001320 + lVar27);
      }
      break;
    case 0x27:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001370 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6744;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6744:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001360 + *plVar24);
        *(undefined8 **)(&DAT_00001360 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001360 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001370 + *plVar24);
        lVar28 = *(long *)(&DAT_00001370 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001370 + lVar27);
      }
      break;
    case 0x28:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000013c0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d67ec;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d67ec:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000013b0 + *plVar24);
        *(undefined8 **)(&DAT_000013b0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000013b0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000013c0 + *plVar24);
        lVar28 = *(long *)(&DAT_000013c0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000013c0 + lVar27);
      }
      break;
    case 0x29:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001410 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6894;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6894:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001400 + *plVar24);
        *(undefined8 **)(&DAT_00001400 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001400 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001410 + *plVar24);
        lVar28 = *(long *)(&DAT_00001410 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001410 + lVar27);
      }
      break;
    case 0x2a:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001460 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d693c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d693c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001450 + *plVar24);
        *(undefined8 **)(&DAT_00001450 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001450 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001460 + *plVar24);
        lVar28 = *(long *)(&DAT_00001460 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001460 + lVar27);
      }
      break;
    case 0x2b:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000014b0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d69e4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d69e4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000014a0 + *plVar24);
        *(undefined8 **)(&DAT_000014a0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000014a0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000014b0 + *plVar24);
        lVar28 = *(long *)(&DAT_000014b0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000014b0 + lVar27);
      }
      break;
    case 0x2c:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001500 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6a8c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6a8c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000014f0 + *plVar24);
        *(undefined8 **)(&DAT_000014f0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000014f0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001500 + *plVar24);
        lVar28 = *(long *)(&DAT_00001500 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001500 + lVar27);
      }
      break;
    case 0x2d:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001550 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6b34;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6b34:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001540 + *plVar24);
        *(undefined8 **)(&DAT_00001540 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001540 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001550 + *plVar24);
        lVar28 = *(long *)(&DAT_00001550 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001550 + lVar27);
      }
      break;
    case 0x2e:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000015a0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6bdc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6bdc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001590 + *plVar24);
        *(undefined8 **)(&DAT_00001590 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001590 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000015a0 + *plVar24);
        lVar28 = *(long *)(&DAT_000015a0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000015a0 + lVar27);
      }
      break;
    case 0x2f:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000015f0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6c84;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6c84:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000015e0 + *plVar24);
        *(undefined8 **)(&DAT_000015e0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000015e0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000015f0 + *plVar24);
        lVar28 = *(long *)(&DAT_000015f0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000015f0 + lVar27);
      }
      break;
    case 0x30:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001640 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6d2c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6d2c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001630 + *plVar24);
        *(undefined8 **)(&DAT_00001630 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001630 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001640 + *plVar24);
        lVar28 = *(long *)(&DAT_00001640 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001640 + lVar27);
      }
      break;
    case 0x31:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001690 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6dd4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6dd4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001680 + *plVar24);
        *(undefined8 **)(&DAT_00001680 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001680 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001690 + *plVar24);
        lVar28 = *(long *)(&DAT_00001690 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001690 + lVar27);
      }
      break;
    case 0x32:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000016e0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6e7c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6e7c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000016d0 + *plVar24);
        *(undefined8 **)(&DAT_000016d0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000016d0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000016e0 + *plVar24);
        lVar28 = *(long *)(&DAT_000016e0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000016e0 + lVar27);
      }
      break;
    case 0x33:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001730 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6f24;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6f24:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001720 + *plVar24);
        *(undefined8 **)(&DAT_00001720 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001720 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001730 + *plVar24);
        lVar28 = *(long *)(&DAT_00001730 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001730 + lVar27);
      }
      break;
    case 0x34:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001780 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d6fcc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d6fcc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001770 + *plVar24);
        *(undefined8 **)(&DAT_00001770 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001770 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001780 + *plVar24);
        lVar28 = *(long *)(&DAT_00001780 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001780 + lVar27);
      }
      break;
    case 0x35:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000017d0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7074;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7074:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000017c0 + *plVar24);
        *(undefined8 **)(&DAT_000017c0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000017c0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000017d0 + *plVar24);
        lVar28 = *(long *)(&DAT_000017d0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000017d0 + lVar27);
      }
      break;
    case 0x36:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001820 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d711c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d711c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001810 + *plVar24);
        *(undefined8 **)(&DAT_00001810 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001810 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001820 + *plVar24);
        lVar28 = *(long *)(&DAT_00001820 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001820 + lVar27);
      }
      break;
    case 0x37:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001870 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d71c4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d71c4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001860 + *plVar24);
        *(undefined8 **)(&DAT_00001860 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001860 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001870 + *plVar24);
        lVar28 = *(long *)(&DAT_00001870 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001870 + lVar27);
      }
      break;
    case 0x38:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000018c0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d726c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d726c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000018b0 + *plVar24);
        *(undefined8 **)(&DAT_000018b0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000018b0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000018c0 + *plVar24);
        lVar28 = *(long *)(&DAT_000018c0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000018c0 + lVar27);
      }
      break;
    case 0x39:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001910 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7314;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7314:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001900 + *plVar24);
        *(undefined8 **)(&DAT_00001900 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001900 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001910 + *plVar24);
        lVar28 = *(long *)(&DAT_00001910 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001910 + lVar27);
      }
      break;
    case 0x3a:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001960 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d73bc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d73bc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001950 + *plVar24);
        *(undefined8 **)(&DAT_00001950 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001950 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001960 + *plVar24);
        lVar28 = *(long *)(&DAT_00001960 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001960 + lVar27);
      }
      break;
    case 0x3b:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000019b0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7464;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7464:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000019a0 + *plVar24);
        *(undefined8 **)(&DAT_000019a0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000019a0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000019b0 + *plVar24);
        lVar28 = *(long *)(&DAT_000019b0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000019b0 + lVar27);
      }
      break;
    case 0x3c:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001a00 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d750c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d750c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000019f0 + *plVar24);
        *(undefined8 **)(&DAT_000019f0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000019f0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001a00 + *plVar24);
        lVar28 = *(long *)(&DAT_00001a00 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001a00 + lVar27);
      }
      break;
    case 0x3d:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001a50 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d75b4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d75b4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001a40 + *plVar24);
        *(undefined8 **)(&DAT_00001a40 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001a40 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001a50 + *plVar24);
        lVar28 = *(long *)(&DAT_00001a50 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001a50 + lVar27);
      }
      break;
    case 0x3e:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001aa0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d765c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d765c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001a90 + *plVar24);
        *(undefined8 **)(&DAT_00001a90 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001a90 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001aa0 + *plVar24);
        lVar28 = *(long *)(&DAT_00001aa0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001aa0 + lVar27);
      }
      break;
    case 0x3f:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001af0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7704;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7704:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001ae0 + *plVar24);
        *(undefined8 **)(&DAT_00001ae0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001ae0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001af0 + *plVar24);
        lVar28 = *(long *)(&DAT_00001af0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001af0 + lVar27);
      }
      break;
    case 0x40:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001b40 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d77ac;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d77ac:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001b30 + *plVar24);
        *(undefined8 **)(&DAT_00001b30 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001b30 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001b40 + *plVar24);
        lVar28 = *(long *)(&DAT_00001b40 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001b40 + lVar27);
      }
      break;
    case 0x41:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001b90 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7854;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7854:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001b80 + *plVar24);
        *(undefined8 **)(&DAT_00001b80 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001b80 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001b90 + *plVar24);
        lVar28 = *(long *)(&DAT_00001b90 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001b90 + lVar27);
      }
      break;
    case 0x42:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001be0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d78fc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d78fc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001bd0 + *plVar24);
        *(undefined8 **)(&DAT_00001bd0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001bd0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001be0 + *plVar24);
        lVar28 = *(long *)(&DAT_00001be0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001be0 + lVar27);
      }
      break;
    case 0x43:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001c30 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d79a4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d79a4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001c20 + *plVar24);
        *(undefined8 **)(&DAT_00001c20 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001c20 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001c30 + *plVar24);
        lVar28 = *(long *)(&DAT_00001c30 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001c30 + lVar27);
      }
      break;
    case 0x44:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001c80 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7a4c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7a4c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001c70 + *plVar24);
        *(undefined8 **)(&DAT_00001c70 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001c70 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001c80 + *plVar24);
        lVar28 = *(long *)(&DAT_00001c80 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001c80 + lVar27);
      }
      break;
    case 0x45:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001cd0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7af4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7af4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001cc0 + *plVar24);
        *(undefined8 **)(&DAT_00001cc0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001cc0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001cd0 + *plVar24);
        lVar28 = *(long *)(&DAT_00001cd0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001cd0 + lVar27);
      }
      break;
    case 0x46:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001d20 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7b9c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7b9c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001d10 + *plVar24);
        *(undefined8 **)(&DAT_00001d10 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001d10 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001d20 + *plVar24);
        lVar28 = *(long *)(&DAT_00001d20 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001d20 + lVar27);
      }
      break;
    case 0x47:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001d70 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7c44;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7c44:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001d60 + *plVar24);
        *(undefined8 **)(&DAT_00001d60 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001d60 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001d70 + *plVar24);
        lVar28 = *(long *)(&DAT_00001d70 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001d70 + lVar27);
      }
      break;
    case 0x48:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001dc0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7cec;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7cec:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001db0 + *plVar24);
        *(undefined8 **)(&DAT_00001db0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001db0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001dc0 + *plVar24);
        lVar28 = *(long *)(&DAT_00001dc0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001dc0 + lVar27);
      }
      break;
    case 0x49:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001e10 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7d94;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7d94:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x1e00);
        *(undefined8 **)(*plVar24 + 0x1e00) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x1e00),fighter_num);
        plVar9 = (long *)(&DAT_00001e10 + *plVar24);
        lVar28 = *(long *)(&DAT_00001e10 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001e10 + lVar27);
      }
      break;
    case 0x4a:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001e60 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7e3c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7e3c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001e50 + *plVar24);
        *(undefined8 **)(&DAT_00001e50 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001e50 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001e60 + *plVar24);
        lVar28 = *(long *)(&DAT_00001e60 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001e60 + lVar27);
      }
      break;
    case 0x4b:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001eb0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7ee4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7ee4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001ea0 + *plVar24);
        *(undefined8 **)(&DAT_00001ea0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001ea0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001eb0 + *plVar24);
        lVar28 = *(long *)(&DAT_00001eb0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001eb0 + lVar27);
      }
      break;
    case 0x4c:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x1f00);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d7f8c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d7f8c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001ef0 + *plVar24);
        *(undefined8 **)(&DAT_00001ef0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001ef0 + *plVar24),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x1f00);
        lVar28 = *(long *)(*plVar24 + 0x1f00);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x1f00);
      }
      break;
    case 0x4d:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001f50 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d8034;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d8034:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001f40 + *plVar24);
        *(undefined8 **)(&DAT_00001f40 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001f40 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001f50 + *plVar24);
        lVar28 = *(long *)(&DAT_00001f50 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001f50 + lVar27);
      }
      break;
    case 0x4e:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00001fa0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d80dc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d80dc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00001f90 + *plVar24);
        *(undefined8 **)(&DAT_00001f90 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00001f90 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00001fa0 + *plVar24);
        lVar28 = *(long *)(&DAT_00001fa0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00001fa0 + lVar27);
      }
      break;
    case 0x4f:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(lVar27 + 0x1ff0);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d8184;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d8184:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(*plVar24 + 0x1fe0);
        *(undefined8 **)(*plVar24 + 0x1fe0) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(*plVar24 + 0x1fe0),fighter_num);
        plVar9 = (long *)(*plVar24 + 0x1ff0);
        lVar28 = *(long *)(*plVar24 + 0x1ff0);
      }
      else {
        plVar9 = (long *)(lVar27 + 0x1ff0);
      }
      break;
    case 0x50:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002040 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d822c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d822c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002030 + *plVar24);
        *(undefined8 **)(&DAT_00002030 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002030 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002040 + *plVar24);
        lVar28 = *(long *)(&DAT_00002040 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002040 + lVar27);
      }
      break;
    case 0x51:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002090 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d82d4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d82d4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002080 + *plVar24);
        *(undefined8 **)(&DAT_00002080 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002080 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002090 + *plVar24);
        lVar28 = *(long *)(&DAT_00002090 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002090 + lVar27);
      }
      break;
    case 0x52:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000020e0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d837c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d837c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000020d0 + *plVar24);
        *(undefined8 **)(&DAT_000020d0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000020d0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000020e0 + *plVar24);
        lVar28 = *(long *)(&DAT_000020e0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000020e0 + lVar27);
      }
      break;
    case 0x53:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002130 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d8424;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d8424:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002120 + *plVar24);
        *(undefined8 **)(&DAT_00002120 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002120 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002130 + *plVar24);
        lVar28 = *(long *)(&DAT_00002130 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002130 + lVar27);
      }
      break;
    case 0x54:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002180 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d84cc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d84cc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002170 + *plVar24);
        *(undefined8 **)(&DAT_00002170 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002170 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002180 + *plVar24);
        lVar28 = *(long *)(&DAT_00002180 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002180 + lVar27);
      }
      break;
    case 0x55:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000021d0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d8574;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d8574:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000021c0 + *plVar24);
        *(undefined8 **)(&DAT_000021c0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000021c0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000021d0 + *plVar24);
        lVar28 = *(long *)(&DAT_000021d0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000021d0 + lVar27);
      }
      break;
    case 0x56:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002220 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d861c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d861c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002210 + *plVar24);
        *(undefined8 **)(&DAT_00002210 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002210 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002220 + *plVar24);
        lVar28 = *(long *)(&DAT_00002220 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002220 + lVar27);
      }
      break;
    case 0x57:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002270 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d86c4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d86c4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002260 + *plVar24);
        *(undefined8 **)(&DAT_00002260 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002260 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002270 + *plVar24);
        lVar28 = *(long *)(&DAT_00002270 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002270 + lVar27);
      }
      break;
    case 0x58:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000022c0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d876c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d876c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000022b0 + *plVar24);
        *(undefined8 **)(&DAT_000022b0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000022b0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000022c0 + *plVar24);
        lVar28 = *(long *)(&DAT_000022c0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000022c0 + lVar27);
      }
      break;
    case 0x59:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002310 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d8814;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d8814:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002300 + *plVar24);
        *(undefined8 **)(&DAT_00002300 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002300 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002310 + *plVar24);
        lVar28 = *(long *)(&DAT_00002310 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002310 + lVar27);
      }
      break;
    case 0x5a:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002360 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d88bc;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d88bc:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002350 + *plVar24);
        *(undefined8 **)(&DAT_00002350 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002350 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002360 + *plVar24);
        lVar28 = *(long *)(&DAT_00002360 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002360 + lVar27);
      }
      break;
    case 0x5b:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_000023b0 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d8964;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d8964:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000023a0 + *plVar24);
        *(undefined8 **)(&DAT_000023a0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000023a0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_000023b0 + *plVar24);
        lVar28 = *(long *)(&DAT_000023b0 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_000023b0 + lVar27);
      }
      break;
    case 0x5c:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002400 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d8a0c;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d8a0c:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_000023f0 + *plVar24);
        *(undefined8 **)(&DAT_000023f0 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_000023f0 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002400 + *plVar24);
        lVar28 = *(long *)(&DAT_00002400 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002400 + lVar27);
      }
      break;
    case 0x5d:
      lVar27 = *DAT_71052b50e8;
      fighter_num = *(uint *)(lVar27 + 0x1c);
      if (fighter_num != 0xffffff) {
        add_idx_to_table1_and_table2(LoadedTables,fighter_num);
        lVar27 = *plVar24;
      }
      lVar28 = *(long *)(&DAT_00002450 + lVar27);
      if (lVar28 == 0) {
        puVar12 = (undefined8 *)jemalloc(0x10,0x20);
        if (puVar12 == (undefined8 *)0x0) {
          if (GlobalAllocator != (void *)0x0) {
            local_64 = 0;
            local_80[0].internal = &SUB_00000020;
                    /* WARNING: Load size is inaccurate */
            uVar7 = (**(code **)(*GlobalAllocator + 0x30))(GlobalAllocator,&local_64,local_80);
            if (((uVar7 & 1) != 0) &&
               (puVar12 = (undefined8 *)jemalloc(0x10,0x20), puVar12 != (undefined8 *)0x0))
            goto LAB_71002d8ab4;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71002d8ab4:
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = &PTR_FUN_7104f60108;
        puVar12[1] = 0;
        plVar9 = *(long **)(&DAT_00002440 + *plVar24);
        *(undefined8 **)(&DAT_00002440 + *plVar24) = puVar12;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        read_param_file(*(ParamContainer **)(&DAT_00002440 + *plVar24),fighter_num);
        plVar9 = (long *)(&DAT_00002450 + *plVar24);
        lVar28 = *(long *)(&DAT_00002450 + *plVar24);
      }
      else {
        plVar9 = (long *)(&DAT_00002450 + lVar27);
      }
      break;
    default:
      goto LAB_71002d8b18;
    }
    *plVar9 = lVar28 + 1;
    if (fighter_num != 0xffffff) {
      unload_resource_by_filepathidx(LoadedTables,fighter_num);
      cVar2 = *(char *)((long)param_1 + 0xc24);
      goto joined_r0x0071002d8b1c;
    }
  }
LAB_71002d8b18:
  cVar2 = *(char *)((long)param_1 + 0xc24);
joined_r0x0071002d8b1c:
  if (cVar2 == '\0') {
    lVar27 = 0;
  }
  else {
    if (((DAT_71053124d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053124d8), iVar5 != 0)) {
      FUN_71017636d0();
      FUN_71000001c0(FUN_7101763310,&DAT_71052c3180,&PTR_LOOP_7104f15000);
      __cxa_guard_release(&DAT_71053124d8);
    }
    fighter_num = *(uint *)(param_1 + 0x2c) & 7;
    if (0xf < *(uint *)(param_1 + 0x2c)) {
      fighter_num = 0xffffffff;
    }
    lVar27 = (long)(int)fighter_num * 0x260 + 0x71052c38f6;
  }
  iVar5 = *(int *)((long)param_1 + 0xc04);
  iVar30 = *(int *)((long)param_1 + 0xc0c);
  *(int *)(param_1 + 0x131) = iVar5;
  if (iVar5 != -1) {
    *(int *)((long)param_1 + 0xaac) = iVar5;
    if (lVar27 == 0) {
      *(undefined8 *)((long)param_1 + 0x98c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x994) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x99c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9a4) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9ac) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9b4) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9bc) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9c4) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9cc) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9d4) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9dc) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9e4) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9ec) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9f4) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0x9fc) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa04) = 0x4248000042480000;
      param_1[0x142] = (long *)0x4248000042480000;
      *(undefined4 *)((long)param_1 + 0xa0c) = 0x42480000;
      *(undefined8 *)((long)param_1 + 0xa94) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa9c) = 0x4248000042480000;
      *(undefined4 *)((long)param_1 + 0xaa4) = 0x42480000;
      *(undefined8 *)((long)param_1 + 0xa1c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa24) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa2c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa34) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa3c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa44) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa4c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa54) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa5c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa64) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa6c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa74) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa7c) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa84) = 0x4248000042480000;
      *(undefined8 *)((long)param_1 + 0xa8c) = 0x4248000042480000;
      *(undefined4 *)(param_1 + 0x143) = 0;
      *(undefined4 *)(param_1 + 0x155) = 0;
      FUN_7100324540();
    }
    else {
      FUN_7100323350();
    }
    FUN_710033f410((float)iVar30,param_1 + 0x131);
  }
  return;
LAB_71002cb310:
  if ((undefined *)local_80[0].internal != (undefined *)0x0) {
    free?(local_80[0].internal);
  }
  local_80[0].internal = (undefined *)0x0;
LAB_71002cb33c:
  pLVar10 = *(L2CAgent **)(*plVar24 + 0x18);
  if (pLVar10 == (L2CAgent *)0x0) {
    CallLuaFunctionFromState(*(undefined8 *)(**(long **)(*plVar24 + 0x10) + 8),"ENTRY");
  }
  else {
    local_80[0].internal = (undefined *)0x0;
    L2CAgent::CallFunctionByHash(pLVar10,0x52b219d70,local_80,(char *)0x0);
    VVar3.internal = local_80[0].internal;
    if ((undefined *)local_80[0].internal != (undefined *)0x0) {
      lVar28 = *(long *)((long)local_80[0].internal + 0x10);
      lVar27 = 0;
      do {
        cVar2 = *(char *)(lVar28 + lVar27);
        if (cVar2 == 's') {
          lVar25 = *(long *)((long)VVar3.internal + 8);
          pvVar6 = *(void **)(lVar25 + lVar27 * 8);
          if (pvVar6 != (void *)0x0) {
            free?(pvVar6);
          }
          *(undefined8 *)(lVar25 + lVar27 * 8) = 0;
        }
        else if (cVar2 == '\0') goto LAB_71002cb3a0;
        lVar27 = lVar27 + 1;
      } while( true );
    }
  }
LAB_71002cb3cc:
  pLVar10 = *(L2CAgent **)(*plVar24 + 0x28);
  if (pLVar10 == (L2CAgent *)0x0) {
    CallLuaFunctionFromState(*(undefined8 *)(**(long **)(*plVar24 + 0x20) + 8),"ENTRY");
  }
  else {
    local_80[0].internal = (undefined *)0x0;
    L2CAgent::CallFunctionByHash(pLVar10,0x52b219d70,local_80,(char *)0x0);
    VVar3.internal = local_80[0].internal;
    if ((undefined *)local_80[0].internal != (undefined *)0x0) {
      lVar28 = *(long *)((long)local_80[0].internal + 0x10);
      lVar27 = 0;
      do {
        cVar2 = *(char *)(lVar28 + lVar27);
        if (cVar2 == 's') {
          lVar25 = *(long *)((long)VVar3.internal + 8);
          pvVar6 = *(void **)(lVar25 + lVar27 * 8);
          if (pvVar6 != (void *)0x0) {
            free?(pvVar6);
          }
          *(undefined8 *)(lVar25 + lVar27 * 8) = 0;
        }
        else if (cVar2 == '\0') goto LAB_71002cb430;
        lVar27 = lVar27 + 1;
      } while( true );
    }
  }
  goto LAB_71002cb45c;
LAB_71002cb3a0:
  if ((undefined *)local_80[0].internal != (undefined *)0x0) {
    free?(local_80[0].internal);
  }
  local_80[0].internal = (undefined *)0x0;
  goto LAB_71002cb3cc;
LAB_71002cb430:
  if ((undefined *)local_80[0].internal != (undefined *)0x0) {
    free?(local_80[0].internal);
  }
  local_80[0].internal = (undefined *)0x0;
  goto LAB_71002cb45c;
}