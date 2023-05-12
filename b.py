import shutil, os

files_that_have_fighter_kind_roy_in_them = [
    "fighter/common/ai/param/fighter_param.prc",
    "fighter/common/ai/param/nfp_learning_param.prc",
    "fighter/common/param/fighter_param.prc",
    "fighter/common/param/fighter_param_motion.prc",
    "fighter/common/param/fighter_param_thrown.prc",
    "item/powblock/param/param.prc",
    "param/in_game/attack_log_parameter.prc",
    "param/in_game/kumite_parameter.prc",
    "param/in_game/result_parameter.prc",
    "param/in_game/staff_roll_parameter.prc",
    "param/in_game/team_result_parameter.prc",
    "param/sound/audience_frame.prc",
    "stage/mario_newbros2/normal/param/mario_newbros2.stdat",
    # "ui/param/database/ui_chara_db.prc", # Commenting this out because I already took care of it
    "ui/param/info/hud_param.prc",
    "ui/param/info/hud_smash_appeal_palutena.prc",
]

def mkdir(path):
    try:
        os.makedirs(os.path.split(path)[0], exist_ok=True)
    except:
        pass

output = "out"
src = "D:\\Modding\\Tools\\ArcExplorer\\export"

for x in files_that_have_fighter_kind_roy_in_them:
    full_input = os.path.join(src, x)
    full_output = os.path.join(output, x)
    mkdir(full_output)
    shutil.copy(full_input, full_output)
