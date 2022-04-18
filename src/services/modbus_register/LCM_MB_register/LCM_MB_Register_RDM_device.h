#ifndef _Register_atMB_
#define _Register_atMB_

/* _____DEFINETIONS__________________________________________________________ */


// Coils Register
enum LCM_DISCRETE_OUTPUT_COILS_REGISTER_FOR_RDM_DEVICES
{
    LCM_COIL_RDM_1_RUN_BIT = 100,
    LCM_COIL_RDM_2_RUN_BIT,
    LCM_COIL_RDM_3_RUN_BIT,
    LCM_COIL_RDM_4_RUN_BIT,
    LCM_COIL_RDM_5_RUN_BIT,
    LCM_COIL_RDM_6_RUN_BIT,
    
    LCM_COIL_RDM_7_RUN_BIT,
    LCM_COIL_RDM_8_RUN_BIT,
    LCM_COIL_RDM_9_RUN_BIT,
    LCM_COIL_RDM_10_RUN_BIT,
    LCM_COIL_RDM_11_RUN_BIT,
    LCM_COIL_RDM_12_RUN_BIT,
    LCM_COIL_RDM_13_RUN_BIT,
    LCM_COIL_RDM_14_RUN_BIT,
    LCM_COIL_RDM_15_RUN_BIT,
    LCM_COIL_RDM_16_RUN_BIT,
    LCM_COIL_RDM_17_RUN_BIT,
    LCM_COIL_RDM_18_RUN_BIT,
    LCM_COIL_RDM_19_RUN_BIT,
    LCM_COIL_RDM_20_RUN_BIT,
    LCM_COIL_RDM_21_RUN_BIT,
    LCM_COIL_RDM_22_RUN_BIT,
    LCM_COIL_RDM_23_RUN_BIT,
    LCM_COIL_RDM_24_RUN_BIT,
    LCM_COIL_RDM_25_RUN_BIT,
    LCM_COIL_RDM_26_RUN_BIT,
    LCM_COIL_RDM_27_RUN_BIT,
    LCM_COIL_RDM_28_RUN_BIT,
    LCM_COIL_RDM_29_RUN_BIT,
    LCM_COIL_RDM_30_RUN_BIT,
    LCM_COIL_RDM_31_RUN_BIT,
    LCM_COIL_RDM_32_RUN_BIT,
    LCM_COIL_RDM_33_RUN_BIT,
    LCM_COIL_RDM_34_RUN_BIT,
    LCM_COIL_RDM_35_RUN_BIT,
    LCM_COIL_RDM_36_RUN_BIT,
    LCM_COIL_RDM_37_RUN_BIT,
    LCM_COIL_RDM_38_RUN_BIT,
    LCM_COIL_RDM_39_RUN_BIT,
    LCM_COIL_RDM_40_RUN_BIT,
    LCM_COIL_RDM_41_RUN_BIT,
    LCM_COIL_RDM_42_RUN_BIT,
    LCM_COIL_RDM_43_RUN_BIT,
    LCM_COIL_RDM_44_RUN_BIT,
    LCM_COIL_RDM_45_RUN_BIT,
    LCM_COIL_RDM_46_RUN_BIT,
    LCM_COIL_RDM_47_RUN_BIT,
    LCM_COIL_RDM_48_RUN_BIT,
    LCM_COIL_RDM_49_RUN_BIT,
    LCM_COIL_RDM_50_RUN_BIT,
    LCM_COIL_RDM_51_RUN_BIT,
    LCM_COIL_RDM_52_RUN_BIT,
    LCM_COIL_RDM_53_RUN_BIT,
    LCM_COIL_RDM_54_RUN_BIT,
    LCM_COIL_RDM_55_RUN_BIT,
    LCM_COIL_RDM_56_RUN_BIT,
    LCM_COIL_RDM_57_RUN_BIT,
    LCM_COIL_RDM_58_RUN_BIT,
    LCM_COIL_RDM_59_RUN_BIT,
    LCM_COIL_RDM_60_RUN_BIT,
    LCM_COIL_RDM_61_RUN_BIT,
    LCM_COIL_RDM_62_RUN_BIT,
    LCM_COIL_RDM_63_RUN_BIT,
    LCM_COIL_RDM_64_RUN_BIT,
    LCM_COIL_RDM_65_RUN_BIT,
    LCM_COIL_RDM_66_RUN_BIT,
    LCM_COIL_RDM_67_RUN_BIT,
    LCM_COIL_RDM_68_RUN_BIT,
    LCM_COIL_RDM_69_RUN_BIT,
    LCM_COIL_RDM_70_RUN_BIT,
    LCM_COIL_RDM_71_RUN_BIT,
    LCM_COIL_RDM_72_RUN_BIT,
    LCM_COIL_RDM_73_RUN_BIT,
    LCM_COIL_RDM_74_RUN_BIT,
    LCM_COIL_RDM_75_RUN_BIT,
    LCM_COIL_RDM_76_RUN_BIT,
    LCM_COIL_RDM_77_RUN_BIT,
    LCM_COIL_RDM_78_RUN_BIT,
    LCM_COIL_RDM_79_RUN_BIT,
    LCM_COIL_RDM_80_RUN_BIT,
    LCM_COIL_RDM_81_RUN_BIT,
    LCM_COIL_RDM_82_RUN_BIT,
    LCM_COIL_RDM_83_RUN_BIT,
    LCM_COIL_RDM_84_RUN_BIT,
    LCM_COIL_RDM_85_RUN_BIT,
    LCM_COIL_RDM_86_RUN_BIT,
    LCM_COIL_RDM_87_RUN_BIT,
    LCM_COIL_RDM_88_RUN_BIT,
    LCM_COIL_RDM_89_RUN_BIT,
    LCM_COIL_RDM_90_RUN_BIT,
    LCM_COIL_RDM_91_RUN_BIT,
    LCM_COIL_RDM_92_RUN_BIT,
    LCM_COIL_RDM_93_RUN_BIT,
    LCM_COIL_RDM_94_RUN_BIT,
    LCM_COIL_RDM_95_RUN_BIT,
    LCM_COIL_RDM_96_RUN_BIT,
    LCM_COIL_RDM_97_RUN_BIT,
    LCM_COIL_RDM_98_RUN_BIT,
    LCM_COIL_RDM_99_RUN_BIT,
    LCM_COIL_RDM_100_RUN_BIT,

};

enum LCM_DISCRETE_INPUT_CONTACTS_REGISTER_FOR_RDM_DEVICES
{
 
    LCM_DI_RDM_1_FEEDBACK_BIT = 100,
    LCM_DI_RDM_2_FEEDBACK_BIT,
    LCM_DI_RDM_3_FEEDBACK_BIT,
    LCM_DI_RDM_4_FEEDBACK_BIT,
    LCM_DI_RDM_5_FEEDBACK_BIT,
    LCM_DI_RDM_6_FEEDBACK_BIT,
    LCM_DI_RDM_7_FEEDBACK_BIT,
    LCM_DI_RDM_8_FEEDBACK_BIT,
    LCM_DI_RDM_9_FEEDBACK_BIT,
    LCM_DI_RDM_10_FEEDBACK_BIT,
    LCM_DI_RDM_11_FEEDBACK_BIT,
    LCM_DI_RDM_12_FEEDBACK_BIT,
    LCM_DI_RDM_13_FEEDBACK_BIT,
    LCM_DI_RDM_14_FEEDBACK_BIT,
    LCM_DI_RDM_15_FEEDBACK_BIT,
    LCM_DI_RDM_16_FEEDBACK_BIT,
    LCM_DI_RDM_17_FEEDBACK_BIT,
    LCM_DI_RDM_18_FEEDBACK_BIT,
    LCM_DI_RDM_19_FEEDBACK_BIT,
    LCM_DI_RDM_20_FEEDBACK_BIT,
    LCM_DI_RDM_21_FEEDBACK_BIT,
    LCM_DI_RDM_22_FEEDBACK_BIT,
    LCM_DI_RDM_23_FEEDBACK_BIT,
    LCM_DI_RDM_24_FEEDBACK_BIT,
    LCM_DI_RDM_25_FEEDBACK_BIT,
    LCM_DI_RDM_26_FEEDBACK_BIT,
    LCM_DI_RDM_27_FEEDBACK_BIT,
    LCM_DI_RDM_28_FEEDBACK_BIT,
    LCM_DI_RDM_29_FEEDBACK_BIT,
    LCM_DI_RDM_30_FEEDBACK_BIT,
    LCM_DI_RDM_31_FEEDBACK_BIT,
    LCM_DI_RDM_32_FEEDBACK_BIT,
    LCM_DI_RDM_33_FEEDBACK_BIT,
    LCM_DI_RDM_34_FEEDBACK_BIT,
    LCM_DI_RDM_35_FEEDBACK_BIT,
    LCM_DI_RDM_36_FEEDBACK_BIT,
    LCM_DI_RDM_37_FEEDBACK_BIT,
    LCM_DI_RDM_38_FEEDBACK_BIT,
    LCM_DI_RDM_39_FEEDBACK_BIT,
    LCM_DI_RDM_40_FEEDBACK_BIT,
    LCM_DI_RDM_41_FEEDBACK_BIT,
    LCM_DI_RDM_42_FEEDBACK_BIT,
    LCM_DI_RDM_43_FEEDBACK_BIT,
    LCM_DI_RDM_44_FEEDBACK_BIT,
    LCM_DI_RDM_45_FEEDBACK_BIT,
    LCM_DI_RDM_46_FEEDBACK_BIT,
    LCM_DI_RDM_47_FEEDBACK_BIT,
    LCM_DI_RDM_48_FEEDBACK_BIT,
    LCM_DI_RDM_49_FEEDBACK_BIT,
    LCM_DI_RDM_50_FEEDBACK_BIT,
    LCM_DI_RDM_51_FEEDBACK_BIT,
    LCM_DI_RDM_52_FEEDBACK_BIT,
    LCM_DI_RDM_53_FEEDBACK_BIT,
    LCM_DI_RDM_54_FEEDBACK_BIT,
    LCM_DI_RDM_55_FEEDBACK_BIT,
    LCM_DI_RDM_56_FEEDBACK_BIT,
    LCM_DI_RDM_57_FEEDBACK_BIT,
    LCM_DI_RDM_58_FEEDBACK_BIT,
    LCM_DI_RDM_59_FEEDBACK_BIT,
    LCM_DI_RDM_60_FEEDBACK_BIT,
    LCM_DI_RDM_61_FEEDBACK_BIT,
    LCM_DI_RDM_62_FEEDBACK_BIT,
    LCM_DI_RDM_63_FEEDBACK_BIT,
    LCM_DI_RDM_64_FEEDBACK_BIT,
    LCM_DI_RDM_65_FEEDBACK_BIT,
    LCM_DI_RDM_66_FEEDBACK_BIT,
    LCM_DI_RDM_67_FEEDBACK_BIT,
    LCM_DI_RDM_68_FEEDBACK_BIT,
    LCM_DI_RDM_69_FEEDBACK_BIT,
    LCM_DI_RDM_70_FEEDBACK_BIT,
    LCM_DI_RDM_71_FEEDBACK_BIT,
    LCM_DI_RDM_72_FEEDBACK_BIT,
    LCM_DI_RDM_73_FEEDBACK_BIT,
    LCM_DI_RDM_74_FEEDBACK_BIT,
    LCM_DI_RDM_75_FEEDBACK_BIT,
    LCM_DI_RDM_76_FEEDBACK_BIT,
    LCM_DI_RDM_77_FEEDBACK_BIT,
    LCM_DI_RDM_78_FEEDBACK_BIT,
    LCM_DI_RDM_79_FEEDBACK_BIT,
    LCM_DI_RDM_80_FEEDBACK_BIT,
    LCM_DI_RDM_81_FEEDBACK_BIT,
    LCM_DI_RDM_82_FEEDBACK_BIT,
    LCM_DI_RDM_83_FEEDBACK_BIT,
    LCM_DI_RDM_84_FEEDBACK_BIT,
    LCM_DI_RDM_85_FEEDBACK_BIT,
    LCM_DI_RDM_86_FEEDBACK_BIT,
    LCM_DI_RDM_87_FEEDBACK_BIT,
    LCM_DI_RDM_88_FEEDBACK_BIT,
    LCM_DI_RDM_89_FEEDBACK_BIT,
    LCM_DI_RDM_90_FEEDBACK_BIT,
    LCM_DI_RDM_91_FEEDBACK_BIT,
    LCM_DI_RDM_92_FEEDBACK_BIT,
    LCM_DI_RDM_93_FEEDBACK_BIT,
    LCM_DI_RDM_94_FEEDBACK_BIT,
    LCM_DI_RDM_95_FEEDBACK_BIT,
    LCM_DI_RDM_96_FEEDBACK_BIT,
    LCM_DI_RDM_97_FEEDBACK_BIT,
    LCM_DI_RDM_98_FEEDBACK_BIT,
    LCM_DI_RDM_99_FEEDBACK_BIT,
    LCM_DI_RDM_100_FEEDBACK_BIT
};

enum LCM_HOLDING_REGISTERS_FOR_RDM_DEVICES
{
    LCM_HR_RDM_1_HR_1 = 100,
    LCM_HR_RDM_2_HR_1,
    LCM_HR_RDM_3_HR_1,
    LCM_HR_RDM_4_HR_1,
    LCM_HR_RDM_5_HR_1,
    LCM_HR_RDM_6_HR_1,
    LCM_HR_RDM_7_HR_1,
    LCM_HR_RDM_8_HR_1,
    LCM_HR_RDM_9_HR_1,
    LCM_HR_RDM_10_HR_1,
    LCM_HR_RDM_11_HR_1,
    LCM_HR_RDM_12_HR_1,
    LCM_HR_RDM_13_HR_1,
    LCM_HR_RDM_14_HR_1,
    LCM_HR_RDM_15_HR_1,
    LCM_HR_RDM_16_HR_1,
    LCM_HR_RDM_17_HR_1,
    LCM_HR_RDM_18_HR_1,
    LCM_HR_RDM_19_HR_1,
    LCM_HR_RDM_20_HR_1,
    LCM_HR_RDM_21_HR_1,
    LCM_HR_RDM_22_HR_1,
    LCM_HR_RDM_23_HR_1,
    LCM_HR_RDM_24_HR_1,
    LCM_HR_RDM_25_HR_1,
    LCM_HR_RDM_26_HR_1,
    LCM_HR_RDM_27_HR_1,
    LCM_HR_RDM_28_HR_1,
    LCM_HR_RDM_29_HR_1,
    LCM_HR_RDM_30_HR_1,
    LCM_HR_RDM_31_HR_1,
    LCM_HR_RDM_32_HR_1,
    LCM_HR_RDM_33_HR_1,
    LCM_HR_RDM_34_HR_1,
    LCM_HR_RDM_35_HR_1,
    LCM_HR_RDM_36_HR_1,
    LCM_HR_RDM_37_HR_1,
    LCM_HR_RDM_38_HR_1,
    LCM_HR_RDM_39_HR_1,
    LCM_HR_RDM_40_HR_1,
    LCM_HR_RDM_41_HR_1,
    LCM_HR_RDM_42_HR_1,
    LCM_HR_RDM_43_HR_1,
    LCM_HR_RDM_44_HR_1,
    LCM_HR_RDM_45_HR_1,
    LCM_HR_RDM_46_HR_1,
    LCM_HR_RDM_47_HR_1,
    LCM_HR_RDM_48_HR_1,
    LCM_HR_RDM_49_HR_1,
    LCM_HR_RDM_50_HR_1,
    LCM_HR_RDM_51_HR_1,
    LCM_HR_RDM_52_HR_1,
    LCM_HR_RDM_53_HR_1,
    LCM_HR_RDM_54_HR_1,
    LCM_HR_RDM_55_HR_1,
    LCM_HR_RDM_56_HR_1,
    LCM_HR_RDM_57_HR_1,
    LCM_HR_RDM_58_HR_1,
    LCM_HR_RDM_59_HR_1,
    LCM_HR_RDM_60_HR_1,
    LCM_HR_RDM_61_HR_1,
    LCM_HR_RDM_62_HR_1,
    LCM_HR_RDM_63_HR_1,
    LCM_HR_RDM_64_HR_1,
    LCM_HR_RDM_65_HR_1,
    LCM_HR_RDM_66_HR_1,
    LCM_HR_RDM_67_HR_1,
    LCM_HR_RDM_68_HR_1,
    LCM_HR_RDM_69_HR_1,
    LCM_HR_RDM_70_HR_1,
    LCM_HR_RDM_71_HR_1,
    LCM_HR_RDM_72_HR_1,
    LCM_HR_RDM_73_HR_1,
    LCM_HR_RDM_74_HR_1,
    LCM_HR_RDM_75_HR_1,
    LCM_HR_RDM_76_HR_1,
    LCM_HR_RDM_77_HR_1,
    LCM_HR_RDM_78_HR_1,
    LCM_HR_RDM_79_HR_1,
    LCM_HR_RDM_80_HR_1,
    LCM_HR_RDM_81_HR_1,
    LCM_HR_RDM_82_HR_1,
    LCM_HR_RDM_83_HR_1,
    LCM_HR_RDM_84_HR_1,
    LCM_HR_RDM_85_HR_1,
    LCM_HR_RDM_86_HR_1,
    LCM_HR_RDM_87_HR_1,
    LCM_HR_RDM_88_HR_1,
    LCM_HR_RDM_89_HR_1,
    LCM_HR_RDM_90_HR_1,
    LCM_HR_RDM_91_HR_1,
    LCM_HR_RDM_92_HR_1,
    LCM_HR_RDM_93_HR_1,
    LCM_HR_RDM_94_HR_1,
    LCM_HR_RDM_95_HR_1,
    LCM_HR_RDM_96_HR_1,
    LCM_HR_RDM_97_HR_1,
    LCM_HR_RDM_98_HR_1,
    LCM_HR_RDM_99_HR_1,
    LCM_HR_RDM_100_HR_1
};

enum LCM_INPUT_REGISTERS_FOR_RDM_DEVICES
{
    LCM_IR_RDM_1_FAULT_CODE = 100,
    LCM_IR_RDM_2_FAULT_CODE,
    LCM_IR_RDM_3_FAULT_CODE,
    LCM_IR_RDM_4_FAULT_CODE,
    LCM_IR_RDM_5_FAULT_CODE,
    LCM_IR_RDM_6_FAULT_CODE,
    LCM_IR_RDM_7_FAULT_CODE,
    LCM_IR_RDM_8_FAULT_CODE,
    LCM_IR_RDM_9_FAULT_CODE,
    LCM_IR_RDM_10_FAULT_CODE,
    LCM_IR_RDM_11_FAULT_CODE,
    LCM_IR_RDM_12_FAULT_CODE,
    LCM_IR_RDM_13_FAULT_CODE,
    LCM_IR_RDM_14_FAULT_CODE,
    LCM_IR_RDM_15_FAULT_CODE,
    LCM_IR_RDM_16_FAULT_CODE,
    LCM_IR_RDM_17_FAULT_CODE,
    LCM_IR_RDM_18_FAULT_CODE,
    LCM_IR_RDM_19_FAULT_CODE,
    LCM_IR_RDM_20_FAULT_CODE,
    LCM_IR_RDM_21_FAULT_CODE,
    LCM_IR_RDM_22_FAULT_CODE,
    LCM_IR_RDM_23_FAULT_CODE,
    LCM_IR_RDM_24_FAULT_CODE,
    LCM_IR_RDM_25_FAULT_CODE,
    LCM_IR_RDM_26_FAULT_CODE,
    LCM_IR_RDM_27_FAULT_CODE,
    LCM_IR_RDM_28_FAULT_CODE,
    LCM_IR_RDM_29_FAULT_CODE,
    LCM_IR_RDM_30_FAULT_CODE,
    LCM_IR_RDM_31_FAULT_CODE,
    LCM_IR_RDM_32_FAULT_CODE,
    LCM_IR_RDM_33_FAULT_CODE,
    LCM_IR_RDM_34_FAULT_CODE,
    LCM_IR_RDM_35_FAULT_CODE,
    LCM_IR_RDM_36_FAULT_CODE,
    LCM_IR_RDM_37_FAULT_CODE,
    LCM_IR_RDM_38_FAULT_CODE,
    LCM_IR_RDM_39_FAULT_CODE,
    LCM_IR_RDM_40_FAULT_CODE,
    LCM_IR_RDM_41_FAULT_CODE,
    LCM_IR_RDM_42_FAULT_CODE,
    LCM_IR_RDM_43_FAULT_CODE,
    LCM_IR_RDM_44_FAULT_CODE,
    LCM_IR_RDM_45_FAULT_CODE,
    LCM_IR_RDM_46_FAULT_CODE,
    LCM_IR_RDM_47_FAULT_CODE,
    LCM_IR_RDM_48_FAULT_CODE,
    LCM_IR_RDM_49_FAULT_CODE,
    LCM_IR_RDM_50_FAULT_CODE,
    LCM_IR_RDM_51_FAULT_CODE,
    LCM_IR_RDM_52_FAULT_CODE,
    LCM_IR_RDM_53_FAULT_CODE,
    LCM_IR_RDM_54_FAULT_CODE,
    LCM_IR_RDM_55_FAULT_CODE,
    LCM_IR_RDM_56_FAULT_CODE,
    LCM_IR_RDM_57_FAULT_CODE,
    LCM_IR_RDM_58_FAULT_CODE,
    LCM_IR_RDM_59_FAULT_CODE,
    LCM_IR_RDM_60_FAULT_CODE,
    LCM_IR_RDM_61_FAULT_CODE,
    LCM_IR_RDM_62_FAULT_CODE,
    LCM_IR_RDM_63_FAULT_CODE,
    LCM_IR_RDM_64_FAULT_CODE,
    LCM_IR_RDM_65_FAULT_CODE,
    LCM_IR_RDM_66_FAULT_CODE,
    LCM_IR_RDM_67_FAULT_CODE,
    LCM_IR_RDM_68_FAULT_CODE,
    LCM_IR_RDM_69_FAULT_CODE,
    LCM_IR_RDM_70_FAULT_CODE,
    LCM_IR_RDM_71_FAULT_CODE,
    LCM_IR_RDM_72_FAULT_CODE,
    LCM_IR_RDM_73_FAULT_CODE,
    LCM_IR_RDM_74_FAULT_CODE,
    LCM_IR_RDM_75_FAULT_CODE,
    LCM_IR_RDM_76_FAULT_CODE,
    LCM_IR_RDM_77_FAULT_CODE,
    LCM_IR_RDM_78_FAULT_CODE,
    LCM_IR_RDM_79_FAULT_CODE,
    LCM_IR_RDM_80_FAULT_CODE,
    LCM_IR_RDM_81_FAULT_CODE,
    LCM_IR_RDM_82_FAULT_CODE,
    LCM_IR_RDM_83_FAULT_CODE,
    LCM_IR_RDM_84_FAULT_CODE,
    LCM_IR_RDM_85_FAULT_CODE,
    LCM_IR_RDM_86_FAULT_CODE,
    LCM_IR_RDM_87_FAULT_CODE,
    LCM_IR_RDM_88_FAULT_CODE,
    LCM_IR_RDM_89_FAULT_CODE,
    LCM_IR_RDM_90_FAULT_CODE,
    LCM_IR_RDM_91_FAULT_CODE,
    LCM_IR_RDM_92_FAULT_CODE,
    LCM_IR_RDM_93_FAULT_CODE,
    LCM_IR_RDM_94_FAULT_CODE,
    LCM_IR_RDM_95_FAULT_CODE,
    LCM_IR_RDM_96_FAULT_CODE,
    LCM_IR_RDM_97_FAULT_CODE,
    LCM_IR_RDM_98_FAULT_CODE,
    LCM_IR_RDM_99_FAULT_CODE,
    LCM_IR_RDM_100_FAULT_CODE
};


#endif