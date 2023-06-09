import sys
fighter_kind_table_1 = [
    0x1254206CE1,
    0x135719EFFD,
    0x114F87B213,
    0x126EFCA05D,
    0x138D699B25,
    0x12D025D4D3,
    0x1209F4DD34,
    0x10F833A6EF,
    0x1484F79606,
    0x12D1A841B3,
    0x11009477B6,
    0x14DE9FBFC5,
    0x12642CCF8C,
    0x1239D9C885,
    0x120DBA0D8B,
    0x1253F95A4E,
    0x12E8FC7B64,
    0x124D2C6D14,
    0x134F84B84E,
    0x12F0791641,
    0x12CFA73B00,
    0x123528955E,
    0x13906CAF9D,
    0x16EC54781F,
    0x122AF1B944,
    0x138CED9F4E,
    0x10941B9DD5,
    0x122E4C5BA0,
    0x1609F9812F,
    0x17A0F92309,
    0x10BF749280,
    0x119CB9184B,
    0x16B1945ECE,
    0x127E70E3C2,
    0x121F10C3E1,
    0x10F405480F,
    0x16B9C57BD9,
    0x18E6E65F1F,
    0x16A86EFC01,
    0x12C55532A1,
    0x1277079A99,
    0x1277A5240E,
    0x137590573C,
    0x135C2B1C9B,
    0x149970E8E1,
    0x129656D69B,
    0x15EF495A02,
    0x1180950000,
    0x1525947CE7,
    0x14CBC59038,
    0x131A10F233,
    0x14FF0713F3,
    0x164CC41E55,
    0x15DCE2594F,
    0x15D6FA9492,
    0x136136F5BD,
    0x13766C540D,
    0x1289AD2C51,
    0x148584085A,
    0x15F8282714,
    0x1081356429,
    0x10FED06867,
    0x127C21BEAB,
    0x12C30E8564,
    0x16EFA9014D,
    0x1431AAF466,
    0x1367240D3A,
    0x1278631EB0,
    0x146CB3DD7F,
    0x124261A72F,
    0x13251ABE2E,
    0x1426792CF8,
    0x17DE1DA827,
    0x1989D173D5,
    0x166E9FAE70,
    0x1182E9DD40,
    0x110B48C23E,
    0x1390E38EBB,
    0x161D8D1990,
    0x167050FD7B,
    0x166A8A2906,
    0x134B155E5A,
    0x11D151C23A,
    0x12A733F9E8,
    0x1250DA2F26,
    0x1226F4B6CD,
    0x13EDFDB2D3,
    0x131B3AF789,
    0x13DFA966E6,
    0x110C2DF884,
    0x13EA13C533,
    0x13843785A5,
    0x12E075EA9A,
    0x12FC152DF0,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x1106BB2B2D,
    0x18CC9A036C,
    0x153248B0B6,
    0x170835B8C2,
    0x1523E3376E,
    0x1586CC8DE4,
    0x124B43B41E,
    0x122567F488,
    0x1431EA5EA7,
]

fighter_kind_table_2 = [
    0x1254206CE1,
    0x135719EFFD,
    0x114F87B213,
    0x126EFCA05D,
    0x138D699B25,
    0x12D025D4D3,
    0x1209F4DD34,
    0x10F833A6EF,
    0x1484F79606,
    0x12D1A841B3,
    0x11009477B6,
    0x14DE9FBFC5,
    0x12642CCF8C,
    0x1239D9C885,
    0x120DBA0D8B,
    0x1253F95A4E,
    0x12E8FC7B64,
    0x124D2C6D14,
    0x134F84B84E,
    0x12F0791641,
    0x12CFA73B00,
    0x123528955E,
    0x13906CAF9D,
    0x16EC54781F,
    0x122AF1B944,
    0x138CED9F4E,
    0x10941B9DD5,
    0x122E4C5BA0,
    0x1609F9812F,
    0x17A0F92309,
    0x10BF749280,
    0x119CB9184B,
    0x16B1945ECE,
    0x127E70E3C2,
    0x121F10C3E1,
    0x10F405480F,
    0x16B9C57BD9,
    0x18E6E65F1F,
    0x16A86EFC01,
    0x12C55532A1,
    0x1277079A99,
    0x1277A5240E,
    0x137590573C,
    0x135C2B1C9B,
    0x149970E8E1,
    0x129656D69B,
    0x15EF495A02,
    0x1180950000,
    0x1525947CE7,
    0x14CBC59038,
    0x131A10F233,
    0x14FF0713F3,
    0x164CC41E55,
    0x15DCE2594F,
    0x15D6FA9492,
    0x136136F5BD,
    0x13766C540D,
    0x1289AD2C51,
    0x148584085A,
    0x15F8282714,
    0x1081356429,
    0x10FED06867,
    0x127C21BEAB,
    0x12C30E8564,
    0x16EFA9014D,
    0x1431AAF466,
    0x1367240D3A,
    0x1278631EB0,
    0x146CB3DD7F,
    0x124261A72F,
    0x13251ABE2E,
    0x1426792CF8,
    0x17DE1DA827,
    0x1989D173D5,
    0x166E9FAE70,
    0x1182E9DD40,
    0x110B48C23E,
    0x1390E38EBB,
    0x161D8D1990,
    0x167050FD7B,
    0x166A8A2906,
    0x134B155E5A,
    0x11D151C23A,
    0x12A733F9E8,
    0x1250DA2F26,
    0x1226F4B6CD,
    0x13EDFDB2D3,
    0x131B3AF789,
    0x13DFA966E6,
    0x110C2DF884,
    0x13EA13C533,
    0x13843785A5,
    0x12E075EA9A,
    0x12FC152DF0,
]

fighter_kinds = {
0x0c541ef0b2: "fighter_kind",
0x16efa9014d: "fighter_kind_bayonetta",
0x12a733f9e8: "fighter_kind_brave",
0x1250da2f26: "fighter_kind_buddy",
0x14de9fbfc5: "fighter_kind_captain",
0x122e4c5ba0: "fighter_kind_chrom",
0x127c21beab: "fighter_kind_cloud",
0x1284ce50e4: "fighter_kind_corps",
0x120dba0d8b: "fighter_kind_daisy",
0x137590573c: "fighter_kind_dedede",
0x12e075ea9a: "fighter_kind_demon",
0x12c55532a1: "fighter_kind_diddy",
0x1226f4b6cd: "fighter_kind_dolly",
0x135719effd: "fighter_kind_donkey",
0x15f8282714: "fighter_kind_duckhunt",
0x110c2df884: "fighter_kind_edge",
0x13ea13c533: "fighter_kind_eflame",
0x13843785a5: "fighter_kind_elight",
0x12cfa73b00: "fighter_kind_falco",
0x124b43b41e: "fighter_kind_flame",
0x10f833a6ef: "fighter_kind_fox",
0x170835b8c2: "fighter_kind_fushigisou",
0x1609f9812f: "fighter_kind_gamewatch",
0x122af1b944: "fighter_kind_ganon",
0x1426792cf8: "fighter_kind_gaogaen",
0x15dce2594f: "fighter_kind_gekkouga",
0x18cc9a036c: "fighter_kind_ice_climber",
0x1787c7b809: "fighter_kind_iceclimber",
0x10f405480f: "fighter_kind_ike",
0x1431aaf466: "fighter_kind_inkling",
0x11d151c23a: "fighter_kind_jack",
0x12c30e8564: "fighter_kind_kamui",
0x10fed06867: "fighter_kind_ken",
0x1209f4dd34: "fighter_kind_kirby",
0x1253f95a4e: "fighter_kind_koopa",
0x1390e38ebb: "fighter_kind_koopag",
0x148584085a: "fighter_kind_koopajr",
0x124261a72f: "fighter_kind_krool",
0x122567f488: "fighter_kind_light",
0x114f87b213: "fighter_kind_link",
0x164cc41e55: "fighter_kind_littlemac",
0x1523e3376e: "fighter_kind_lizardon",
0x149970e8e1: "fighter_kind_lucario",
0x1277079a99: "fighter_kind_lucas",
0x13906caf9d: "fighter_kind_lucina",
0x12d1a841b3: "fighter_kind_luigi",
0x1254206ce1: "fighter_kind_mario",
0x134f84b84e: "fighter_kind_mariod",
0x123528955e: "fighter_kind_marth",
0x13edfdb2d3: "fighter_kind_master",
0x17a0f92309: "fighter_kind_metaknight",
0x138ced9f4e: "fighter_kind_mewtwo",
0x161d8d1990: "fighter_kind_miienemyf",
0x166a8a2906: "fighter_kind_miienemyg",
0x167050fd7b: "fighter_kind_miienemys",
0x17de1da827: "fighter_kind_miifighter",
0x166e9fae70: "fighter_kind_miigunner",
0x1989d173d5: "fighter_kind_miiswordsman",
0x1525947ce7: "fighter_kind_murabito",
0x110b48c23e: "fighter_kind_nana",
0x11009477b6: "fighter_kind_ness",
0x1106bb2b2d: "fighter_kind_none",
0x134b155e5a: "fighter_kind_packun",
0x136136f5bd: "fighter_kind_pacman",
0x15d6fa9492: "fighter_kind_palutena",
0x1239d9c885: "fighter_kind_peach",
0x18e6e65f1f: "fighter_kind_pfushigisou",
0x12f0791641: "fighter_kind_pichu",
0x13dfa966e6: "fighter_kind_pickel",
0x1484f79606: "fighter_kind_pikachu",
0x135c2b1c9b: "fighter_kind_pikmin",
0x10bf749280: "fighter_kind_pit",
0x119cb9184b: "fighter_kind_pitb",
0x16a86efc01: "fighter_kind_plizardon",
0x1182e9dd40: "fighter_kind_popo",
0x1586cc8de4: "fighter_kind_ptrainer",
0x12642ccf8c: "fighter_kind_purin",
0x16b9c57bd9: "fighter_kind_pzenigame",
0x13d6cfcbd0: "fighter_kind_random",
0x13766c540d: "fighter_kind_reflet",
0x146cb3dd7f: "fighter_kind_richter",
0x1367240d3a: "fighter_kind_ridley",
0x129656d69b: "fighter_kind_robot",
0x14cbc59038: "fighter_kind_rockman",
0x14ff0713f3: "fighter_kind_rosetta",
0x10941b9dd5: "fighter_kind_roy",
0x1081356429: "fighter_kind_ryu",
0x126efca05d: "fighter_kind_samus",
0x138d699b25: "fighter_kind_samusd",
0x12e8fc7b64: "fighter_kind_sheik",
0x13251abe2e: "fighter_kind_shizue",
0x1289ad2c51: "fighter_kind_shulk",
0x1278631eb0: "fighter_kind_simon",
0x121f10c3e1: "fighter_kind_snake",
0x1277a5240e: "fighter_kind_sonic",
0x16b1945ece: "fighter_kind_szerosuit",
0x131b3af789: "fighter_kind_tantan",
0x15ef495a02: "fighter_kind_toonlink",
0x12fc152df0: "fighter_kind_trail",
0x127e70e3c2: "fighter_kind_wario",
0x131a10f233: "fighter_kind_wiifit",
0x1180950000: "fighter_kind_wolf",
0x12d025d4d3: "fighter_kind_yoshi",
0x16ec54781f: "fighter_kind_younglink",
0x124d2c6d14: "fighter_kind_zelda",
0x153248b0b6: "fighter_kind_zenigame",
0x1431ea5ea7: "fighter_kind_element"
}

names = ["Mario", "Donkey", "Link", "Samus", "SamusD", "Yoshi", "Kirby", "Fox", "Pikachu", "Luigi", "Ness", "Captain", "Purin", "Peach", "Daisy", "Koopa", "Sheik", "Zelda", "MarioD", "Pichu", "Falco", "Marth", "Lucina", "Younglink", "Ganon", "Mewtwo", "Roy", "Chrom", "GameWatch", "Metaknight", "Pit", "PitB", "SZerosuit", "Wario", "Snake", "Ike", "PZenigame", "PFushigisou", "PLizardon", "Diddy", "Lucas", "Sonic", "Dedede", "Pikmin", "Lucario", "Robot", "Toonlink", "Wolf", "Murabito", "Rockman", "Wiifit", "Rosetta", "Littlemac", "Gekkouga", "Palutena", "Pacman", "Reflet", "Shulk", "KoopaJr", "Duckhunt", "Ryu", "Ken", "Cloud", "Kamui", "Bayonetta", "Inkling", "Ridley", "Simon", "Richter", "Krool", "Shizue", "Gaogaen", "MiiFighter", "MiiSwordsman", "MiiGunner", "Popo", "Nana", "KoopaG", "MiiEnemyF", "MiiEnemyS", "MiiEnemyG", "Packun", "Jack", "Brave", "Buddy", "Dolly", "Master", "Tantan", "Pickel", "Edge", "EFlame", "ELight", "Demon", "Trail", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "IceClimber", "Zenigame", "Fushigisou", "Lizardon", "PTrainer", "Flame", "Light", "Roy"]


out = list(set(fighter_kind_table_1) - set(fighter_kind_table_2))

# for x in range(len(fighter_kind_table_2)):
#     print("%-30s - %-30s - %-30s" % (fighter_kinds[fighter_kind_table_1[x]], fighter_kinds[fighter_kind_table_2[x]], names[x]))
# print("%-30s - %-30s - %-30s" % (fighter_kinds[fighter_kind_table_1[int(sys.argv[1])]], fighter_kinds[fighter_kind_table_2[int(sys.argv[1])]], names[int(sys.argv[1])]))
# for x in fighter_kind_table_2:
#     print("%s" % (fighter_kinds[x] if x in fighter_kinds else hex(x)))

def check_arr_idx(arr, idx):
    try:
        arr[idx]
        return True
    except:
        return False

for x in range(len(fighter_kind_table_1)):
    print("%-30s - %-30s - %-30s - %s" % (fighter_kinds[fighter_kind_table_1[x]], fighter_kinds[fighter_kind_table_2[x]] if check_arr_idx(fighter_kind_table_2, x) else "None", names[x], x))