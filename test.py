import os

cmd = ("pip install pyfiglet")

os.system(cmd)

import pyfiglet
from termcolor import colored


fonts = ["1943____","3x5","3-d","5lineoblique","4x4_offr","5x8","5x7","6x10","64f1____","a_zooloo","6x9","advenger","acrobatic","alligator2","alligator","aquaplan","alphabet","asc_____","arrows","assalt_m","ascii___","atc_____","asslt__m","avatar","atc_gran","banner","b_m__200","banner3-D","banner3","barbwire","banner4","battle_s","basic","baz__bil","battlesh","bell","beer_pub","bigchief","big","block","binary","briteb","brite","britei","britebi","bubble","broadway","bubble_b","bubble__","c1______","bulbhead","c_ascii_","c2______","calgphy2","c_consen","catwalk","caligraphy","char1___","caus_in_","char3___","char2___","charact1","char4___","charact3","charact2","charact5","charact4","characte","charact6","chartr","charset_","chunky","chartri","clb8x10","clb6x10","cli8x8","clb8x8","clr5x10","clr4x6","clr5x8","clr5x6","clr6x6","clr6x10","clr7x10","clr6x8","clr8x10","clr7x8","coil_cop","clr8x8","colossal","coinstak","computer","com_sen_","contrast","contessa","cosmic","convoy__","cour","cosmike","courbi","courb","crawford","couri","cursive","cricket","cybermedium","cyberlarge","d_dragon","cybersmall","decimal","dcs_bfmo","defleppard","deep_str","demo_2__","demo_1__","devilish","demo_m__","digital","diamond","doom","doh","double","dotmatrix","druid___","drpepper","e__fist_","dwhistled","ebbs_2__","ebbs_1__","eftichess","eca_____","eftipiti","eftifont","eftitalic","eftirobot","eftiwater","eftiwall","etcrvs__","epic","faces_of","f15_____","fairligh","fair_mea","fbr12___","fantasy_","fbr2____","fbr1____","fbr_tilt","fbr_stri","finalass","fender","flyn_sh","fireing_","fp1_____","fourtops","fraktur","fp2_____","future_1","funky_dr","future_3","future_2","future_5","future_4","future_7","future_6","fuzzy","future_8","ghost_bo","gauntlet","gothic","goofy","graceful","gothic__","graffiti","gradient","greek","grand_pr","hades___","green_be","helv","heavy_me","helvbi","helvb","heroboti","helvi","high_noo","hex","hollywood","hills___","house_of","home_pak","hyper___","hypa_bal","invita","inc_raw_","isometric2","isometric1","isometric4","isometric3","italics_","italic","jazmine","ivrit","joust___","jerusalem","kban","katakana","kik_star","kgames_i","larry3d","krak_out","lcd","lazy_jon","letter_w","lean","letterw3","letters","linux","lexible_","mad_nurs","lockergnome","magic_ma","madrid","master_o","marquee","mayhem_d","maxfour","mig_ally","mcg_____","mini","mike","mnemonic","mirror","morse","modern__","mshebrew210","moscow","nancyj-fancy","nancyj","new_asci","nancyj-underlined","nipples","nfi1____","npn_____","notie_ca","nvscript","ntgreek","octal","o8","ogre","odel_lak","os2","ok_beer_","p_s_h_m_","outrun__","pacos_pe","p_skateb","pawn_ins","panther_","peaks","pawp","pepper","pebbles","platoon2","phonix__","pod_____","platoon_","puffy","poison","r2-d2___","pyramid","rad_phan","rad_____","rainbow_","radical_","rally_sp","rally_s2","rastan__","rampage_","rci_____","raw_recu","relief","rectangles","rev","relief2","road_rai","ripper!_","rok_____","rockbox_","roman___","roman","rounded","rot13","rozzo","rowancap","runyc","runic","sansb","sans","sansi","sansbi","sbook","sblood","sbookbi","sbookb","script","sbooki","serifcap","script__","shimrod","shadow","skate_ro","short","skateroc","skateord","slant","sketch_s","slscript","slide","small","sm______","smkeyboard","smisome1","smshadow","smscript","smtengwar","smslant","spc_demo","space_op","stacey","speed","standard","stampatello","starwars","star_war","stellar","stealth_","stencil2","stencil1","straight","stop","subteran","street_s","t__of_ap","super_te","tav1____","tanja","tec1____","taxi____","tecrvs__","tec_7000","term","tengwar","thin","thick","ti_pan__","threepoint","ticksslant","ticks","times","tiles","tinker-toy","timesofl","tombstone","tomahawk","trashman","top_duck","triad_st","trek","tsalagi","ts1_____","tsn_base","tsm_____","ttyb","tty","twin_cob","tubular","type_set","twopoint","ugalympi","ucf_fan_","univers","unarmed_","usa_pq__","usa_____","utopia","usaflag","utopiabi","utopiab","vortron_","utopiai","wavy","war_of_w","whimsy","weird","xbriteb","xbrite","xbritei","xbritebi","xchartri","xchartr","xcourb","xcour","xcouri","xcourbi","xhelvb","xhelv","xhelvi","xhelvbi","xsansb","xsans","xsansi","xsansbi","xsbookb","xsbook","xsbooki","xsbookbi","xtty","xtimes","yie-ar__","xttyb","z-pilot_","yie_ar_k","zone7___","zig_zag_"]
x = len(fonts)
for i in fonts:
	result = pyfiglet.figlet_format("SHELL SHARE", font=i)
	#result = pyfiglet.figlet_format("SHELL SHARE", font='block')
	colored_result = colored(result, color='green', attrs=['bold'])
	print("\n"+i)
	print(colored_result)

