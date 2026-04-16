#include "__cf_sltestFuelRateControlExample.h"
#include "sltestFuelRateControlExample_capi.h"
#include "sltestFuelRateControlExample.h"
#include "sltestFuelRateControlExample_private.h"
#define aky502xth2 ((uint8_T)1U)
#define cc0n5udzhc (0)
#define cql2qfcciv ((uint8_T)2U)
#define d5bjtkeszp ((uint8_T)2U)
#define db0wc4upmt ((uint8_T)2U)
#define dp1bfrnk0y ((uint8_T)1U)
#define f42hpq3d02 (-1)
#define fifqjkxssq ((uint8_T)1U)
#define fu5bmata5c ((uint8_T)1U)
#define g2wo04nbbh ((uint8_T)1U)
#define g45ud0nghe ((uint8_T)3U)
#define g4j2te41m2 ((uint8_T)1U)
#define gdtewn3anb (24)
#define j0k1kwupjh ((uint8_T)1U)
#define jhxwvjdpme ((uint8_T)3U)
#define jlchrimkmu ((uint8_T)2U)
#define jxf1gloz4d ((uint8_T)0U)
#define kvv0qfwk24 ((uint8_T)1U)
#define m33avgaw5o ((uint8_T)2U)
#define nok2okzmci ((uint8_T)1U)
#define nrmwd45juk ((uint8_T)2U)
#define nuv2f3x4tq ((uint8_T)3U)
#define o5nghvr2l4 ((uint8_T)1U)
#define omgdte33bt (1)
#define omnptrb2be (25)
#define p4vqc40vay ((uint8_T)2U)
#define poijygz4ie ((uint8_T)2U)
int_T i0sf2npjx0 [ 2 ] ; const EngSensors
sltestFuelRateControlExample_rtZEngSensors = { 0.0F , 0.0F , 0.0F , 0.0F } ;
static RegMdlInfo rtMdlInfo_sltestFuelRateControlExample [ 51 ] = { {
"kvmiw41uugl" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "jkkla00hoo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "lwww3bwbe4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "pw3pqhe5ry" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "aew0ghnvkh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "jpe4y2iozi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "hr0e2f1lfl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "m1hffloj3b" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "phnadx3tig" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "gk12r5eka4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "h5txqhwwth" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "kfgzjec0hk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "e1qy25oevx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "a3vzgcyi32" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "pvfpzm2zah" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "etfz3jtpel" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "dmdci12deo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "lwz40dwdzm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "bjav4gyaxx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "sltestFuelRateControlExample" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "mm1mv0coea" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "oh0equzdk0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "i0sf2npjx0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "ag3doey1gn0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "d1gnsawjlfk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , { "Fueling_ModeType_Overspeed" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1 , ( void * ) "Fueling_ModeType" } , {
"Fueling_ModeType_Shutdown" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1 , ( void
* ) "Fueling_ModeType" } , { "Fueling_ModeType_Normal" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1 , ( void * ) "Fueling_ModeType" } , {
"Fueling_ModeType_Single_Failure" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1 , (
void * ) "Fueling_ModeType" } , { "Fueling_ModeType_Warmup" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1 , ( void * ) "Fueling_ModeType" } , {
"Fueling_ModeType_None" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1 , ( void * )
"Fueling_ModeType" } , { "Fueling_ModeType" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "DISABLED" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1 , ( void
* ) "sld_FuelModes" } , { "RICH" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1 , (
void * ) "sld_FuelModes" } , { "LOW" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , - 1
, ( void * ) "sld_FuelModes" } , { "sld_FuelModes" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "EngSensors" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "mr_sltestFuelRateControlExample_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "sltestFuelRateControlExample" } , {
"mr_sltestFuelRateControlExample_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "sltestFuelRateControlExample" } , {
"sltestFuelRateControlExample.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "sltestFuelRateControlExample.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1
, ( void * ) "sltestFuelRateControlExample" } } ; amd2ef32fl amd2ef32flc = {
{ 0.012F , 0.024F , 0.036F , 0.048F , 0.06F , 0.072F , 0.024F , 0.048F ,
0.072F , 0.096F , 0.12F , 0.144F , 0.036F , 0.072F , 0.108F , 0.144F , 0.18F
, 0.216F , 0.048F , 0.096F , 0.144F , 0.192F , 0.24F , 0.288F , 0.06F , 0.12F
, 0.18F , 0.24F , 0.3F , 0.36F , 0.072F , 0.144F , 0.216F , 0.288F , 0.36F ,
0.432F } , { 100.0F , 200.0F , 300.0F , 400.0F , 500.0F , 600.0F } , { 0.0F ,
0.2F , 0.4F , 0.6F , 0.8F , 1.0F } , { 0.806253195F , 0.553142309F ,
0.371515F , 0.27766791F , 0.220198959F , 0.18128866F , 0.1532F , 0.115431018F
, 0.091306746F , 0.0746519193F , 0.0625231117F , 0.0533383638F ,
0.0461719036F , 0.0357830189F , 0.0286869146F , 0.0235863309F , 0.01977784F ,
0.0168486331F , 0.877576F , 0.687048912F , 0.482612312F , 0.354224265F ,
0.278413475F , 0.227999583F , 0.191995725F , 0.14403452F , 0.113642313F ,
0.0927600786F , 0.0776005387F , 0.0661461428F , 0.0572233275F , 0.0443099402F
, 0.0355034247F , 0.0291800201F , 0.0244618915F , 0.0208349507F ,
0.957740664F , 0.884928048F , 0.772510231F , 0.634596467F , 0.499509245F ,
0.398952961F , 0.330914646F , 0.243979126F , 0.190658227F , 0.154689625F ,
0.1288822F , 0.109538592F , 0.0945575535F , 0.0730034634F , 0.0583848245F ,
0.047925625F , 0.0401408486F , 0.0341670811F , 0.985153079F , 0.959498346F ,
0.917829216F , 0.858155191F , 0.780915678F , 0.690639436F , 0.595646858F ,
0.429790109F , 0.328784287F , 0.263508737F , 0.217821226F , 0.184122682F ,
0.158314109F , 0.121584751F , 0.0969202F , 0.0793847293F , 0.0663889721F ,
0.0564468168F , 0.993888915F , 0.983356237F , 0.96620214F , 0.941196859F ,
0.907255054F , 0.863705933F , 0.81066674F , 0.682438672F , 0.545074463F ,
0.428509384F , 0.349265665F , 0.292552203F , 0.249955267F , 0.190411493F ,
0.151046544F , 0.123326123F , 0.102911837F , 0.0873631835F , 0.997089922F ,
0.992081106F , 0.983928144F , 0.97202009F , 0.955734789F , 0.934478819F ,
0.907750487F , 0.836880624F , 0.744624078F , 0.639187157F , 0.533026397F ,
0.440754801F , 0.372825325F , 0.280611306F , 0.221078858F , 0.179727361F ,
0.149540216F , 0.126685023F , 0.998445332F , 0.995771F , 0.99142015F ,
0.985064566F , 0.976359308F , 0.964951277F , 0.950492501F , 0.911180317F ,
0.856657803F , 0.787142217F , 0.70579946F , 0.618550897F , 0.532255232F ,
0.394398153F , 0.307794333F , 0.248796239F , 0.206232622F , 0.174257815F ,
0.999091804F , 0.997530162F , 0.99499017F , 0.991280079F , 0.98619628F ,
0.979525864F , 0.971050084F , 0.947813928F , 0.914883494F , 0.871145308F ,
0.81646204F , 0.752132297F , 0.681013703F , 0.534281611F , 0.412602365F ,
0.331018358F , 0.273087412F , 0.230004579F , 0.999430954F , 0.998452544F ,
0.996861517F , 0.994537711F , 0.991353095F , 0.987172544F , 0.981855094F ,
0.967228591F , 0.94631809F , 0.918076277F , 0.881751478F , 0.837127805F ,
0.784760237F , 0.663365841F , 0.536233485F , 0.427244395F , 0.350367218F ,
0.293931365F , 0.999622822F , 0.998974383F , 0.997920036F , 0.99638015F ,
0.994269788F , 0.991498768F , 0.987972558F , 0.978257596F , 0.96431154F ,
0.945327878F , 0.920583785F , 0.889546752F , 0.852005184F , 0.758897305F ,
0.649402738F , 0.537134409F , 0.438541144F , 0.36613825F , 0.999738276F ,
0.999288321F , 0.998556793F , 0.997488439F , 0.996024251F , 0.994101465F ,
0.991654F , 0.984905303F , 0.975196242F , 0.961925626F , 0.944507658F ,
0.922421277F , 0.895275295F , 0.825346F , 0.736919701F , 0.637336671F ,
0.5367F , 0.446837723F , 0.999845564F , 0.99958F , 0.999148369F , 0.998518F ,
0.997653961F , 0.996519327F , 0.995074689F , 0.99108845F , 0.985343F ,
0.977463067F , 0.967061579F , 0.9537552F , 0.937186778F , 0.893138409F ,
0.833757102F , 0.760335326F , 0.677028656F , 0.589975357F , 0.999937177F ,
0.999829233F , 0.999653637F , 0.999397337F , 0.999045968F , 0.998584509F ,
0.997996926F , 0.996374607F , 0.994033F , 0.990813076F , 0.986544609F ,
0.981048405F , 0.97413969F , 0.95534575F , 0.928773582F , 0.8933599F ,
0.848668516F , 0.795175433F , 0.999967337F , 0.999911249F , 0.99982F ,
0.999686718F , 0.999504089F , 0.99926424F , 0.998958766F , 0.998115301F ,
0.99689734F , 0.995221198F , 0.992996395F , 0.990126133F , 0.986508131F ,
0.976600945F , 0.962402284F , 0.943066239F , 0.917867661F , 0.886319876F ,
0.999979854F , 0.999945283F , 0.999889F , 0.999806941F , 0.999694347F ,
0.999546528F , 0.999358237F , 0.998838305F , 0.998087406F , 0.997053742F ,
0.995681F , 0.993908584F , 0.991672039F , 0.985531628F , 0.976685107F ,
0.964537084F , 0.948508918F , 0.928087711F , 0.999985874F , 0.999961555F ,
0.999922F , 0.99986428F , 0.999785125F , 0.999681175F , 0.999548852F ,
0.999183297F , 0.998655319F , 0.997928381F , 0.996962786F , 0.995715618F ,
0.994141042F , 0.989812911F , 0.983562112F , 0.974945724F , 0.963512838F ,
0.948829353F , 0.999988854F , 0.999969721F , 0.999938667F , 0.999893248F ,
0.999831F , 0.999749303F , 0.999645174F , 0.9993577F , 0.998942494F ,
0.998370707F , 0.997611105F , 0.996629894F , 0.995390773F , 0.99198252F ,
0.987054348F , 0.980248332F , 0.971192241F , 0.959515452F } , { 50.0F , 75.0F
, 100.0F , 125.0F , 150.0F , 175.0F , 200.0F , 250.0F , 300.0F , 350.0F ,
400.0F , 450.0F , 500.0F , 600.0F , 700.0F , 800.0F , 900.0F , 1000.0F } , {
0.0F , 3.0F , 6.0F , 9.0F , 12.0F , 15.0F , 18.0F , 21.0F , 24.0F , 27.0F ,
30.0F , 35.0F , 46.0F , 57.0F , 68.0F , 79.0F , 90.0F } , { 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
1.88135278F , 3.79849601F , 5.11555624F , 6.24242306F , 7.27207184F ,
8.24307728F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
1.97904503F , 3.49935436F , 4.5761261F , 5.4899869F , 6.31516314F ,
7.81434536F , 9.1973238F , 10.5135374F , 11.7881632F , 13.0358734F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 3.26939893F , 4.68685293F ,
5.83082914F , 6.84534693F , 7.78334856F , 8.67098713F , 10.3498116F ,
11.9492445F , 13.502018F , 15.026679F , 16.534853F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 2.00945115F , 3.26512671F , 4.93993711F , 6.25862074F ,
7.42063284F , 8.49319F , 9.50824642F , 10.4837666F , 12.3572435F , 14.166872F
, 15.9404755F , 17.6946201F , 19.4401188F , 0.0F , 0.0F , 0.0F , 0.0F ,
2.2355473F , 3.56980419F , 4.54951859F , 6.12848568F , 7.47141647F ,
8.69252872F , 9.83954906F , 10.9374933F , 12.0012598F , 14.0618372F ,
16.0687141F , 18.0477409F , 20.0148335F , 21.9807243F , 0.0F , 0.0F , 0.0F ,
1.76802313F , 3.45390487F , 4.57394934F , 5.50260878F , 7.08785915F ,
8.48241425F , 9.77170753F , 10.9951305F , 12.1744337F , 13.3230076F ,
15.560813F , 17.7531414F , 19.9250393F , 22.0923615F , 24.2661343F , 0.0F ,
0.0F , 0.0F , 2.92603731F , 4.29428244F , 5.35854626F , 6.28151226F ,
7.90293217F , 9.35722542F , 10.7159815F , 12.0141449F , 13.2716484F ,
14.50103F , 16.9067726F , 19.274519F , 21.6291046F , 23.9866638F ,
26.3587685F , 0.0F , 0.0F , 1.6895206F , 3.68765259F , 4.96177387F , 6.01267F
, 6.94608974F , 8.61479473F , 10.1307974F , 11.5577745F , 12.92799F ,
14.2602577F , 15.5666018F , 18.1320057F , 20.6666508F , 23.1955185F ,
25.7352581F , 28.2981949F , 0.0F , 0.0F , 2.58459282F , 4.28271055F ,
5.52152443F , 6.57608128F , 7.52690601F , 9.24709892F , 10.8243914F ,
12.3174524F , 13.756794F , 15.1605015F , 16.5402737F , 19.2580204F ,
21.9522457F , 24.6483192F , 27.3635902F , 30.11133F , 0.0F , 0.0F , 0.0F ,
0.0F , 6.00442934F , 7.07068968F , 8.04209614F , 9.81495F , 11.452095F ,
13.0088034F , 14.5143795F , 15.9864168F , 17.4364033F , 20.2999916F ,
23.1474209F , 26.004631F , 28.8898373F , 31.8174362F , 0.0F , 0.0F , 0.0F ,
0.0F , 6.45575285F , 7.53897667F , 8.53383636F , 10.3624458F , 12.0611897F ,
13.682806F , 15.255702F , 16.7971153F , 18.3183956F , 21.330267F ,
24.3339176F , 27.3560638F , 30.4160194F , 33.5295906F , 0.0F , 0.0F , 0.0F ,
0.0F , 6.917624F , 8.02325916F , 9.04579258F , 10.9372311F , 12.7040052F ,
14.3968058F , 16.0433292F , 17.6605492F , 19.2597466F , 22.4338818F ,
25.6089802F , 28.8128624F , 32.0663185F , 35.3870583F , 0.0F , 0.0F , 0.0F ,
6.147964F , 7.40645838F , 8.54037666F , 9.59562206F , 11.5590477F ,
13.4026279F , 15.175375F , 16.9044304F , 18.6065979F , 20.2931442F ,
23.6495171F , 27.0178471F , 30.4275208F , 33.9013824F , 37.4598045F , 0.0F ,
0.0F , 0.0F , 6.65737867F , 7.94329739F , 9.11265182F , 10.2071829F ,
12.2551374F , 14.1878939F , 16.0530949F , 17.8774757F , 19.6777649F ,
21.4652977F , 25.0328426F , 28.6260681F , 32.2766342F , 36.0103722F ,
39.8515892F , 0.0F , 0.0F , 5.72108746F , 7.23481369F , 8.55895138F ,
9.77342415F , 10.9165154F , 13.0671806F , 15.1073408F , 17.0835571F ,
19.0223236F , 20.9404221F , 22.8493614F , 26.6715717F , 30.5375404F ,
34.4824257F , 38.5366707F , 42.7308197F , 0.0F , 0.0F , 6.37501669F ,
7.92705107F , 9.30473F , 10.5788307F , 11.7847071F , 14.0663919F , 16.24259F
, 18.3591175F , 20.4424553F , 22.5096283F , 24.5725079F , 28.7190361F ,
32.9350281F , 37.261467F , 41.7367F , 46.4023323F , 0.0F , 0.0F , 7.20563555F
, 8.82334805F , 10.2797403F , 11.638F , 12.9310017F , 15.392539F ,
17.7544479F , 20.0623035F , 22.3429794F , 24.6141033F , 26.8882809F ,
31.4829178F , 36.1881561F , 41.0561714F , 46.1411743F , 51.508503F , 0.0F ,
6.38557196F , 8.39976F , 10.1353073F , 11.7206268F , 13.2126637F , 14.642314F
, 17.3835354F , 20.033205F , 22.6377373F , 25.2253189F , 27.8151016F ,
30.4213924F , 35.7286F , 41.2277489F , 46.9991913F , 53.140873F , 59.7919655F
, 0.0F , 8.36078548F , 10.6117506F , 12.6118336F , 14.4699907F , 16.2388916F
, 17.9485626F , 21.2600727F , 24.4970798F , 27.7107067F , 30.934145F ,
34.1919937F , 37.504776F , 44.3714333F , 51.6991463F , 59.7145615F , 68.8121F
, 79.9040298F } , { 50.0F , 75.0F , 100.0F , 125.0F , 150.0F , 175.0F ,
200.0F , 250.0F , 300.0F , 350.0F , 400.0F , 450.0F , 500.0F , 600.0F ,
700.0F , 800.0F , 900.0F , 1000.0F } , { 0.05F , 0.1F , 0.15F , 0.2F , 0.25F
, 0.3F , 0.35F , 0.4F , 0.45F , 0.5F , 0.55F , 0.6F , 0.65F , 0.7F , 0.75F ,
0.8F , 0.85F , 0.9F , 0.95F } , { 471.83783F , 550.809387F , 777.559326F ,
1080.92432F , 1418.36792F , 1769.74683F , 2125.37305F , 2480.20337F ,
2831.37793F , 3177.14014F , 3516.3291F , 4064.9043F , 5187.55371F ,
7058.8125F , 7905.21338F , 7710.46826F , 8213.01074F , 279.608398F ,
330.673309F , 480.41745F , 685.372131F , 916.851379F , 1160.13147F ,
1407.76453F , 1655.75757F , 1901.80872F , 2144.49268F , 2382.86743F ,
2768.85864F , 3559.93774F , 5120.07617F , 4857.30469F , 5340.47949F ,
5695.38672F , 203.371567F , 242.268524F , 358.002167F , 519.092041F ,
703.229858F , 898.239F , 1097.70374F , 1298.09729F , 1497.35583F ,
1694.19189F , 1887.75171F , 2201.51245F , 2845.4F , 3415.67261F , 3902.68115F
, 5138.02246F , 5427.47363F , 161.878754F , 193.747162F , 289.574188F ,
424.676178F , 580.603088F , 746.787781F , 917.473633F , 1089.42798F ,
1260.73462F , 1430.18896F , 1596.98962F , 1867.63159F , 2423.68115F ,
2916.59814F , 3337.74414F , 3678.54565F , 3928.96045F , 135.709488F ,
162.95755F , 245.543304F , 363.14566F , 499.94F , 646.508606F , 797.577881F ,
950.132751F , 1102.36523F , 1253.13123F , 1401.66699F , 1642.87622F ,
2138.96802F , 2579.08423F , 2955.27612F , 3259.77368F , 3483.54541F ,
117.7089F , 141.679672F , 214.776321F , 319.692047F , 442.510223F ,
574.688965F , 711.335083F , 849.607666F , 987.786621F , 1124.77673F ,
1259.84424F , 1479.3446F , 1931.19983F , 2332.35229F , 2675.36743F ,
2953.07129F , 3941.979F , 104.597549F , 126.123497F , 192.077911F ,
287.341858F , 399.445496F , 520.541077F , 646.047363F , 773.270203F ,
900.564331F , 1026.87671F , 1151.49976F , 1354.15686F , 1771.67188F ,
2142.56519F , 2459.81055F , 2716.7F , 2905.53076F , 94.6535873F , 114.289215F
, 174.677689F , 262.345123F , 365.951599F , 478.214111F , 594.814392F ,
713.185303F , 831.747742F , 949.486328F , 1065.71704F , 1254.83179F ,
1644.71497F , 1991.24658F , 2287.73804F , 2527.86182F , 2704.38599F ,
86.8841324F , 105.018799F , 160.956497F , 242.492874F , 339.189941F ,
444.232941F , 553.529175F , 664.623718F , 775.997192F , 886.668823F ,
995.97644F , 1173.91064F , 1540.95923F , 1867.34351F , 2146.66504F ,
2372.91479F , 2539.25391F , 80.6758041F , 97.5942535F , 149.902115F ,
226.394211F , 317.364349F , 416.391479F , 519.579163F , 624.572815F ,
729.907959F , 834.636169F , 938.11554F , 1106.62891F , 1454.41455F ,
1763.78784F , 2028.60535F , 2243.13232F , 2400.86377F , 75.3236F ,
91.1737061F , 140.278595F , 212.292313F , 298.151917F , 391.791199F ,
489.494537F , 589.001526F , 688.899841F , 788.272F , 886.496033F ,
1046.50916F , 1376.90149F , 1670.90625F , 1922.61621F , 2126.54712F ,
2276.4978F , 70.3050919F , 85.1299362F , 131.15361F , 198.846298F ,
279.764099F , 368.186615F , 460.575775F , 554.764038F , 649.390625F ,
743.568604F , 836.695496F , 988.463867F , 1301.98425F , 1581.08044F ,
1820.07471F , 2013.72668F , 2156.12915F , 65.4742355F , 79.2906799F ,
122.277817F , 185.702133F , 261.730865F , 344.988281F , 432.114197F ,
521.034302F , 610.43927F , 699.472717F , 787.551514F , 931.154907F ,
1227.96887F , 1492.30432F , 1718.71021F , 1902.18616F , 2037.11633F ,
60.6944962F , 73.4929199F , 113.409378F , 172.509338F , 243.579971F ,
321.598083F , 403.385956F , 486.964447F , 571.076599F , 654.896667F ,
737.861145F , 873.194641F , 1153.09351F , 1402.48877F , 1616.15527F ,
1789.33447F , 1916.7041F , 55.8207664F , 67.5611496F , 104.280991F ,
158.871872F , 224.769455F , 297.322235F , 373.544922F , 451.558167F ,
530.159241F , 608.554F , 686.198425F , 812.933655F , 1075.25745F ,
1309.13806F , 1509.57971F , 1672.07166F , 1791.59521F , 50.6743431F ,
61.2765198F , 94.5509338F , 144.272446F , 204.58017F , 271.229858F ,
341.447083F , 413.460876F , 486.126495F , 558.682922F , 630.606384F ,
748.102112F , 991.559265F , 1208.7998F , 1395.06421F , 1546.10291F ,
1657.21912F , 44.9951668F , 54.3172302F , 83.7055588F , 127.917923F ,
181.892578F , 241.855606F , 305.2771F , 370.51059F , 436.476685F ,
502.450592F , 567.930176F , 675.029785F , 897.290344F , 1095.85962F ,
1266.22815F , 1404.43066F , 1506.12732F , 38.3189926F , 46.1040916F ,
70.8031616F , 108.326912F , 154.583191F , 206.386963F , 261.519592F ,
318.492798F , 376.308594F , 434.285736F , 491.94693F , 586.451233F ,
783.085449F , 959.124268F , 1110.33276F , 1233.0741F , 1323.42944F ,
29.5056648F , 35.2055588F , 53.4779663F , 81.7063904F , 117.117081F ,
157.382584F , 200.762543F , 246.018951F , 292.282776F , 338.940094F ,
385.549744F , 462.283264F , 622.87146F , 767.312622F , 891.700195F ,
992.823669F , 1067.3335F } , { 0.0F , 3.0F , 6.0F , 9.0F , 12.0F , 15.0F ,
18.0F , 21.0F , 24.0F , 27.0F , 30.0F , 35.0F , 46.0F , 57.0F , 68.0F , 79.0F
, 90.0F } , { 0.05F , 0.1F , 0.15F , 0.2F , 0.25F , 0.3F , 0.35F , 0.4F ,
0.45F , 0.5F , 0.55F , 0.6F , 0.65F , 0.7F , 0.75F , 0.8F , 0.85F , 0.9F ,
0.95F } , 628.0F , 0.0F , 25.0F , 1.2F , 0.95F , 628.0F , 90.0F , 0.05F ,
3.0F , 250.0F , 0.0F , { 8.7696F , - 8.5104F } , { 1.0F , - 0.7408F } , 0.0F
, 0.0F , { 0.0F , 0.2592F } , { 1.0F , - 0.7408F } , 0.0F , 0.0F , 0.0F ,
0.5F , 0.5F , 0.01F , 0.0F , { - 0.0556348F , - 0.0022828F , 0.0256932F ,
0.0435188F , 0.0562692F , 0.0661194846F , 0.0741572F , 0.08697F , 0.0972452F
, 0.10607034F , 0.113989197F , 0.121303864F , 0.128195599F , 0.141133204F ,
0.153345779F , 0.165105194F , 0.176562533F , 0.187808394F , 0.0185328F ,
0.0465088F , 0.0617968F , 0.0720096F , 0.0796848F , 0.0859099403F ,
0.0912288F , 0.100235201F , 0.107972801F , 0.114985369F , 0.121544801F ,
0.127802134F , 0.133848F , 0.145516798F , 0.156823084F , 0.167902797F ,
0.178831473F , 0.189654395F , 0.0419484F , 0.0614657328F , 0.0725244F ,
0.0801996F , 0.0861830637F , 0.0911998302F , 0.0956124F , 0.10335F ,
0.110241733F , 0.116650112F , 0.122756399F , 0.12866129F , 0.134425193F ,
0.14567107F , 0.156675264F , 0.167528406F , 0.178280845F , 0.188962802F ,
0.052676F , 0.067964F , 0.076908F , 0.0833144F , 0.088452F , 0.092864573F ,
0.096824F , 0.103927203F , 0.110396F , 0.116502285F , 0.122382F ,
0.128110662F , 0.1337336F , 0.144768F , 0.155621141F , 0.166361F ,
0.177025333F , 0.187636793F , 0.0583284F , 0.0710788F , 0.078754F ,
0.084399119F , 0.0890292F , 0.093079254F , 0.0967668F , 0.103489362F ,
0.109704398F , 0.115629427F , 0.121373199F , 0.12699613F , 0.132534474F ,
0.143442F , 0.154204518F , 0.164876401F , 0.175487861F , 0.186057046F ,
0.0614432F , 0.072501868F , 0.0793312F , 0.0844688F , 0.0887605324F ,
0.0925689116F , 0.0960752F , 0.102544F , 0.108589865F , 0.114394054F ,
0.120047197F , 0.125599638F , 0.131081596F , 0.141904533F , 0.152606621F ,
0.163233206F , 0.173809424F , 0.184350401F , 0.063107945F , 0.072958231F ,
0.0791833699F , 0.0839584544F , 0.0880085155F , 0.0916442722F , 0.095021084F
, 0.101308629F , 0.107233658F , 0.112951532F , 0.118539944F , 0.124042042F ,
0.129483715F , 0.140246227F , 0.150905162F , 0.161499366F , 0.172050416F ,
0.182571262F , 0.0638664F , 0.0728104F , 0.0785824F , 0.0830856F , 0.0869544F
, 0.0904606879F , 0.0937404F , 0.099892F , 0.105726399F , 0.111379541F ,
0.116919398F , 0.122383736F , 0.127795205F , 0.138512403F , 0.149138972F ,
0.159708902F , 0.170241073F , 0.180746794F , 0.0640206635F , 0.0722597763F ,
0.0776793361F , 0.0819710642F , 0.0856988877F , 0.0891044736F , 0.0923086703F
, 0.0983545333F , 0.104118444F , 0.109721236F , 0.115223333F , 0.120658293F ,
0.12604627F , 0.136728227F , 0.147329614F , 0.157880664F , 0.168398142F ,
0.178892136F , 0.063752F , 0.0714272F , 0.0765648F , 0.080687359F ,
0.0843024F , 0.0876274258F , 0.0907712F , 0.0967324823F , 0.10244F ,
0.108002514F , 0.113474399F , 0.118885867F , 0.124255039F , 0.134908795F ,
0.14549005F , 0.156026F , 0.166531727F , 0.177016318F , 0.0631757453F ,
0.0703895614F , 0.075296469F , 0.0792806149F , 0.0828033835F , 0.0860625F ,
0.0891568363F , 0.0950489119F , 0.100710288F , 0.106239848F , 0.111687019F ,
0.117079258F , 0.122433051F , 0.133063748F , 0.143628523F , 0.15415211F ,
0.164648235F , 0.175125122F , 0.0623688F , 0.0691981316F , 0.0739128F ,
0.0777816F , 0.0812274665F , 0.0844316557F , 0.0874848F , 0.0933192F ,
0.0989421308F , 0.104444228F , 0.109870799F , 0.115247019F , 0.120588F ,
0.131199464F , 0.141750515F , 0.152263805F , 0.162751913F , 0.173222393F ,
0.0613844F , 0.0678884F , 0.0724404F , 0.0762116F , 0.0795924F ,
0.0827501118F , 0.0857684F , 0.091554F , 0.0971444F , 0.102623254F ,
0.108032398F , 0.113395065F , 0.118725203F , 0.129320398F , 0.139859825F ,
0.150364399F , 0.160845727F , 0.171310797F , 0.0602605715F , 0.0664857179F ,
0.070898287F , 0.0745858252F , 0.0779108554F , 0.0810287371F , 0.0840171427F
, 0.0897609144F , 0.0953234285F , 0.100782365F , 0.10617657F , 0.111527622F ,
0.116848454F , 0.127429709F , 0.137959182F , 0.14845629F , 0.158931807F ,
0.169392228F , 0.0590252F , 0.0650086701F , 0.0693004F , 0.0729154423F ,
0.0761921331F , 0.0792754889F , 0.082238F , 0.0879455209F , 0.0934838653F ,
0.0989255458F , 0.104306802F , 0.109647781F , 0.114960559F , 0.125529736F ,
0.136050567F , 0.146541193F , 0.157011688F , 0.167468086F , 0.0576992F ,
0.0634712F , 0.0676572F , 0.0712088F , 0.0744432F , 0.0774963424F ,
0.0804362F , 0.086112F , 0.0916292F , 0.0970557705F , 0.102425702F ,
0.107757866F , 0.113063604F , 0.123622201F , 0.134135485F , 0.144620448F ,
0.155086532F , 0.165539399F , 0.0562985651F , 0.0618839748F , 0.0659766793F ,
0.0694723055F , 0.0726693869F , 0.0756958723F , 0.0786157399F , 0.0842635557F
, 0.0897620916F , 0.0951753408F , 0.100535274F , 0.10585966F , 0.111159176F ,
0.121708445F , 0.132215068F , 0.14269504F , 0.153157234F , 0.163606986F ,
0.054835733F , 0.0602552891F , 0.0642650649F , 0.0677109361F , 0.0708748475F
, 0.0738776401F , 0.0767797306F , 0.0824026689F , 0.0878846198F ,
0.0932860225F , 0.0986370668F , 0.103954546F , 0.109248534F , 0.119789511F ,
0.13029021F , 0.140765727F , 0.151224479F , 0.16167146F , 0.0533205271F ,
0.0585916825F , 0.0625272617F , 0.0659286082F , 0.0690628439F , 0.0720444396F
, 0.0749306306F , 0.0805313066F , 0.0859984234F , 0.0913892165F ,
0.0967323184F , 0.102043614F , 0.107332654F , 0.117866211F , 0.128361613F ,
0.138833165F , 0.149288803F , 0.159733325F } , { 50.0F , 75.0F , 100.0F ,
125.0F , 150.0F , 175.0F , 200.0F , 250.0F , 300.0F , 350.0F , 400.0F ,
450.0F , 500.0F , 600.0F , 700.0F , 800.0F , 900.0F , 1000.0F } , { 0.05F ,
0.1F , 0.15F , 0.2F , 0.25F , 0.3F , 0.35F , 0.4F , 0.45F , 0.5F , 0.55F ,
0.6F , 0.65F , 0.7F , 0.75F , 0.8F , 0.85F , 0.9F , 0.95F } , { 0.01F , -
0.01F } , { 1.0F , - 0.8F } , 0.0F , 0.0684931502F , 0.0856164396F , 0.0F , {
5U , 5U } , { 17U , 16U } , { 17U , 18U } , { 16U , 18U } , { 17U , 18U } ,
LOW , 0U } ; static void cuteyyu0y4 ( const EngSensors * dv15fgvzkq ,
Fueling_ModeType * c0kqngp5ge , kfgzjec0hk * localB , h5txqhwwth * localDW )
; static void fb1pl5cjaz ( const EngSensors * dv15fgvzkq , Fueling_ModeType *
c0kqngp5ge , kfgzjec0hk * localB , h5txqhwwth * localDW ) ; static void
cuteyyu0y4 ( const EngSensors * dv15fgvzkq , Fueling_ModeType * c0kqngp5ge ,
kfgzjec0hk * localB , h5txqhwwth * localDW ) { switch ( localDW -> o4cyqt01yu
. i24j1pe5bs ) { case g4j2te41m2 : switch ( localDW -> o4cyqt01yu .
iiadmwmliq ) { case fu5bmata5c : if ( ( localDW -> o4cyqt01yu . lqi4ycbrbi ==
db0wc4upmt ) && ( dv15fgvzkq -> speed < amd2ef32flc . P_17 - amd2ef32flc .
P_14 ) ) { if ( ! ( localDW -> o4cyqt01yu . esepnq0lq0 == dp1bfrnk0y ) ) {
localDW -> o4cyqt01yu . iiadmwmliq = jxf1gloz4d ; localDW -> o4cyqt01yu .
i24j1pe5bs = p4vqc40vay ; switch ( localDW -> o4cyqt01yu . efkz4gtkyi ) {
case nok2okzmci : if ( localDW -> o4cyqt01yu . grs0245ugm != nok2okzmci ) {
localDW -> o4cyqt01yu . grs0245ugm = nok2okzmci ; localDW -> o4cyqt01yu .
efkz4gtkyi = nok2okzmci ; localB -> dpqe5mrupf = LOW ; } switch ( localDW ->
o4cyqt01yu . ko3zsunh0c ) { case aky502xth2 : localDW -> o4cyqt01yu .
gdsldb3ugy = aky502xth2 ; localDW -> o4cyqt01yu . ko3zsunh0c = aky502xth2 ; *
c0kqngp5ge = Fueling_ModeType_Normal ; break ; case m33avgaw5o : localDW ->
o4cyqt01yu . gdsldb3ugy = m33avgaw5o ; localDW -> o4cyqt01yu . ko3zsunh0c =
m33avgaw5o ; * c0kqngp5ge = Fueling_ModeType_Warmup ; break ; default :
localDW -> o4cyqt01yu . gdsldb3ugy = jxf1gloz4d ; break ; } break ; case
nrmwd45juk : if ( localDW -> o4cyqt01yu . grs0245ugm != nrmwd45juk ) {
localDW -> o4cyqt01yu . grs0245ugm = nrmwd45juk ; localDW -> o4cyqt01yu .
efkz4gtkyi = nrmwd45juk ; localB -> dpqe5mrupf = RICH ; } localDW ->
o4cyqt01yu . byfduinobf = fifqjkxssq ; * c0kqngp5ge =
Fueling_ModeType_Single_Failure ; break ; default : localDW -> o4cyqt01yu .
grs0245ugm = jxf1gloz4d ; break ; } } else { localDW -> o4cyqt01yu .
iiadmwmliq = jlchrimkmu ; * c0kqngp5ge = Fueling_ModeType_Shutdown ; } }
break ; case jlchrimkmu : if ( localDW -> mhivhlq5d1 == omnptrb2be ) {
localDW -> o4cyqt01yu . iiadmwmliq = jxf1gloz4d ; localDW -> o4cyqt01yu .
i24j1pe5bs = p4vqc40vay ; if ( localDW -> o4cyqt01yu . grs0245ugm !=
nrmwd45juk ) { localDW -> o4cyqt01yu . grs0245ugm = nrmwd45juk ; localDW ->
o4cyqt01yu . efkz4gtkyi = nrmwd45juk ; localB -> dpqe5mrupf = RICH ; }
localDW -> o4cyqt01yu . byfduinobf = fifqjkxssq ; * c0kqngp5ge =
Fueling_ModeType_Single_Failure ; } break ; default : localDW -> o4cyqt01yu .
iiadmwmliq = jxf1gloz4d ; break ; } break ; case p4vqc40vay : if ( localDW ->
mhivhlq5d1 == gdtewn3anb ) { localDW -> o4cyqt01yu . gdsldb3ugy = jxf1gloz4d
; localDW -> o4cyqt01yu . grs0245ugm = jxf1gloz4d ; localDW -> o4cyqt01yu .
byfduinobf = jxf1gloz4d ; localDW -> o4cyqt01yu . i24j1pe5bs = g4j2te41m2 ;
localB -> dpqe5mrupf = DISABLED ; localDW -> o4cyqt01yu . iiadmwmliq =
jlchrimkmu ; * c0kqngp5ge = Fueling_ModeType_Shutdown ; } else if (
dv15fgvzkq -> speed > amd2ef32flc . P_17 ) { localDW -> o4cyqt01yu .
gdsldb3ugy = jxf1gloz4d ; localDW -> o4cyqt01yu . grs0245ugm = jxf1gloz4d ;
localDW -> o4cyqt01yu . byfduinobf = jxf1gloz4d ; localDW -> o4cyqt01yu .
i24j1pe5bs = g4j2te41m2 ; localB -> dpqe5mrupf = DISABLED ; localDW ->
o4cyqt01yu . iiadmwmliq = fu5bmata5c ; * c0kqngp5ge =
Fueling_ModeType_Overspeed ; } else { switch ( localDW -> o4cyqt01yu .
grs0245ugm ) { case nok2okzmci : switch ( localDW -> o4cyqt01yu . gdsldb3ugy
) { case aky502xth2 : if ( localDW -> o4cyqt01yu . esepnq0lq0 == jhxwvjdpme )
{ localDW -> o4cyqt01yu . gdsldb3ugy = jxf1gloz4d ; localDW -> o4cyqt01yu .
grs0245ugm = nrmwd45juk ; localDW -> o4cyqt01yu . efkz4gtkyi = nrmwd45juk ;
localB -> dpqe5mrupf = RICH ; localDW -> o4cyqt01yu . byfduinobf = fifqjkxssq
; * c0kqngp5ge = Fueling_ModeType_Single_Failure ; } break ; case m33avgaw5o
: if ( localDW -> o4cyqt01yu . lfv2jx2lln == cql2qfcciv ) { if ( localDW ->
o4cyqt01yu . esepnq0lq0 == jhxwvjdpme ) { localDW -> o4cyqt01yu . gdsldb3ugy
= jxf1gloz4d ; localDW -> o4cyqt01yu . grs0245ugm = nrmwd45juk ; localDW ->
o4cyqt01yu . efkz4gtkyi = nrmwd45juk ; localB -> dpqe5mrupf = RICH ; localDW
-> o4cyqt01yu . byfduinobf = fifqjkxssq ; * c0kqngp5ge =
Fueling_ModeType_Single_Failure ; } else { localDW -> o4cyqt01yu . gdsldb3ugy
= aky502xth2 ; localDW -> o4cyqt01yu . ko3zsunh0c = aky502xth2 ; * c0kqngp5ge
= Fueling_ModeType_Normal ; } } break ; default : localDW -> o4cyqt01yu .
gdsldb3ugy = jxf1gloz4d ; break ; } break ; case nrmwd45juk : if ( ! ( (
localDW -> o4cyqt01yu . byfduinobf != fifqjkxssq ) || ( ! ( localDW ->
o4cyqt01yu . esepnq0lq0 == poijygz4ie ) ) ) ) { localDW -> o4cyqt01yu .
byfduinobf = jxf1gloz4d ; localDW -> o4cyqt01yu . grs0245ugm = nok2okzmci ;
localDW -> o4cyqt01yu . efkz4gtkyi = nok2okzmci ; localB -> dpqe5mrupf = LOW
; localDW -> o4cyqt01yu . gdsldb3ugy = aky502xth2 ; localDW -> o4cyqt01yu .
ko3zsunh0c = aky502xth2 ; * c0kqngp5ge = Fueling_ModeType_Normal ; } break ;
default : localDW -> o4cyqt01yu . grs0245ugm = jxf1gloz4d ; break ; } } break
; default : localDW -> o4cyqt01yu . i24j1pe5bs = jxf1gloz4d ; break ; } }
static void fb1pl5cjaz ( const EngSensors * dv15fgvzkq , Fueling_ModeType *
c0kqngp5ge , kfgzjec0hk * localB , h5txqhwwth * localDW ) { int32_T
b_previousEvent ; switch ( localDW -> o4cyqt01yu . esepnq0lq0 ) { case
dp1bfrnk0y : switch ( localDW -> o4cyqt01yu . ks101l5lkk ) { case j0k1kwupjh
: if ( localDW -> mhivhlq5d1 == cc0n5udzhc ) { localDW -> o4cyqt01yu .
ks101l5lkk = d5bjtkeszp ; } break ; case d5bjtkeszp : if ( localDW ->
mhivhlq5d1 == omgdte33bt ) { localDW -> o4cyqt01yu . ks101l5lkk = j0k1kwupjh
; } else { if ( localDW -> mhivhlq5d1 == cc0n5udzhc ) { localDW -> o4cyqt01yu
. ks101l5lkk = g45ud0nghe ; } } break ; case g45ud0nghe : if ( localDW ->
mhivhlq5d1 == cc0n5udzhc ) { localDW -> o4cyqt01yu . ks101l5lkk = jxf1gloz4d
; if ( localDW -> o4cyqt01yu . esepnq0lq0 == dp1bfrnk0y ) { localDW ->
o4cyqt01yu . esepnq0lq0 = jxf1gloz4d ; b_previousEvent = localDW ->
mhivhlq5d1 ; localDW -> mhivhlq5d1 = omnptrb2be ; if ( localDW -> o4cyqt01yu
. nthl3jo4xz != 0U ) { cuteyyu0y4 ( dv15fgvzkq , c0kqngp5ge , localB ,
localDW ) ; } localDW -> mhivhlq5d1 = b_previousEvent ; } localDW ->
o4cyqt01yu . esepnq0lq0 = jhxwvjdpme ; } else { if ( localDW -> mhivhlq5d1 ==
omgdte33bt ) { localDW -> o4cyqt01yu . ks101l5lkk = d5bjtkeszp ; } } break ;
default : localDW -> o4cyqt01yu . ks101l5lkk = jxf1gloz4d ; break ; } break ;
case poijygz4ie : if ( localDW -> mhivhlq5d1 == omgdte33bt ) { localDW ->
o4cyqt01yu . esepnq0lq0 = jhxwvjdpme ; } break ; case jhxwvjdpme : if (
localDW -> mhivhlq5d1 == omgdte33bt ) { localDW -> o4cyqt01yu . esepnq0lq0 =
dp1bfrnk0y ; b_previousEvent = localDW -> mhivhlq5d1 ; localDW -> mhivhlq5d1
= gdtewn3anb ; if ( localDW -> o4cyqt01yu . nthl3jo4xz != 0U ) { cuteyyu0y4 (
dv15fgvzkq , c0kqngp5ge , localB , localDW ) ; } localDW -> mhivhlq5d1 =
b_previousEvent ; localDW -> o4cyqt01yu . ks101l5lkk = g45ud0nghe ; } else {
if ( localDW -> mhivhlq5d1 == cc0n5udzhc ) { localDW -> o4cyqt01yu .
esepnq0lq0 = poijygz4ie ; } } break ; default : localDW -> o4cyqt01yu .
esepnq0lq0 = jxf1gloz4d ; break ; } } void dmdci12deo ( real32_T * houo3ih12p
, Fueling_ModeType * c0kqngp5ge , kfgzjec0hk * localB , h5txqhwwth * localDW
) { localDW -> gdxty0epfl = amd2ef32flc . P_35 ; localDW -> g4epmevidu =
amd2ef32flc . P_41 ; localDW -> mhivhlq5d1 = f42hpq3d02 ; localDW ->
o4cyqt01yu . cqepffoxqv = 0U ; localDW -> o4cyqt01yu . esepnq0lq0 =
jxf1gloz4d ; localDW -> o4cyqt01yu . ks101l5lkk = jxf1gloz4d ; localDW ->
o4cyqt01yu . nthl3jo4xz = 0U ; localDW -> o4cyqt01yu . i24j1pe5bs =
jxf1gloz4d ; localDW -> o4cyqt01yu . iiadmwmliq = jxf1gloz4d ; localDW ->
o4cyqt01yu . grs0245ugm = jxf1gloz4d ; localDW -> o4cyqt01yu . efkz4gtkyi =
jxf1gloz4d ; localDW -> o4cyqt01yu . gdsldb3ugy = jxf1gloz4d ; localDW ->
o4cyqt01yu . ko3zsunh0c = jxf1gloz4d ; localDW -> o4cyqt01yu . byfduinobf =
jxf1gloz4d ; localDW -> o4cyqt01yu . cbymrbpu22 = 0U ; localDW -> o4cyqt01yu
. lrnaiftqmv = jxf1gloz4d ; localDW -> o4cyqt01yu . lfv2jx2lln = jxf1gloz4d ;
localDW -> bz1ypnwz02 = 0U ; localDW -> o4cyqt01yu . p4df0u25qy = 0U ;
localDW -> o4cyqt01yu . cmxsgvof5k = jxf1gloz4d ; localDW -> o4cyqt01yu .
d54ws1m3hr = 0U ; localDW -> o4cyqt01yu . lqi4ycbrbi = jxf1gloz4d ; localDW
-> o4cyqt01yu . mu5l2andm0 = 0U ; localDW -> o4cyqt01yu . cicy20d1ya =
jxf1gloz4d ; localDW -> o4cyqt01yu . m1fyoxg5ll = 0U ; localB -> ip2hg4hncd .
throttle = 0.0F ; localB -> ip2hg4hncd . speed = 0.0F ; localB -> ip2hg4hncd
. ego = 0.0F ; localB -> ip2hg4hncd . map = 0.0F ; localB -> d5fnkqyyhm =
false ; localB -> dpqe5mrupf = LOW ; * c0kqngp5ge = Fueling_ModeType_None ;
localDW -> fqey34mmcf = amd2ef32flc . P_25 ; * houo3ih12p = amd2ef32flc .
P_22 ; localDW -> cjlqjt3njc = amd2ef32flc . P_29 ; * houo3ih12p =
amd2ef32flc . P_26 ; * houo3ih12p = amd2ef32flc . P_30 ; } void etfz3jtpel (
Fueling_ModeType * c0kqngp5ge , kfgzjec0hk * localB , h5txqhwwth * localDW )
{ localDW -> gdxty0epfl = amd2ef32flc . P_35 ; localDW -> g4epmevidu =
amd2ef32flc . P_41 ; localDW -> mhivhlq5d1 = f42hpq3d02 ; localDW ->
o4cyqt01yu . cqepffoxqv = 0U ; localDW -> o4cyqt01yu . esepnq0lq0 =
jxf1gloz4d ; localDW -> o4cyqt01yu . ks101l5lkk = jxf1gloz4d ; localDW ->
o4cyqt01yu . nthl3jo4xz = 0U ; localDW -> o4cyqt01yu . i24j1pe5bs =
jxf1gloz4d ; localDW -> o4cyqt01yu . iiadmwmliq = jxf1gloz4d ; localDW ->
o4cyqt01yu . grs0245ugm = jxf1gloz4d ; localDW -> o4cyqt01yu . efkz4gtkyi =
jxf1gloz4d ; localDW -> o4cyqt01yu . gdsldb3ugy = jxf1gloz4d ; localDW ->
o4cyqt01yu . ko3zsunh0c = jxf1gloz4d ; localDW -> o4cyqt01yu . byfduinobf =
jxf1gloz4d ; localDW -> o4cyqt01yu . cbymrbpu22 = 0U ; localDW -> o4cyqt01yu
. lrnaiftqmv = jxf1gloz4d ; localDW -> o4cyqt01yu . lfv2jx2lln = jxf1gloz4d ;
localDW -> bz1ypnwz02 = 0U ; localDW -> o4cyqt01yu . p4df0u25qy = 0U ;
localDW -> o4cyqt01yu . cmxsgvof5k = jxf1gloz4d ; localDW -> o4cyqt01yu .
d54ws1m3hr = 0U ; localDW -> o4cyqt01yu . lqi4ycbrbi = jxf1gloz4d ; localDW
-> o4cyqt01yu . mu5l2andm0 = 0U ; localDW -> o4cyqt01yu . cicy20d1ya =
jxf1gloz4d ; localDW -> o4cyqt01yu . m1fyoxg5ll = 0U ; localB -> ip2hg4hncd .
throttle = 0.0F ; localB -> ip2hg4hncd . speed = 0.0F ; localB -> ip2hg4hncd
. ego = 0.0F ; localB -> ip2hg4hncd . map = 0.0F ; localB -> d5fnkqyyhm =
false ; localB -> dpqe5mrupf = LOW ; * c0kqngp5ge = Fueling_ModeType_None ; }
void bjav4gyaxx ( h5txqhwwth * localDW ) { localDW -> ggfpxzfbem = - 1 ; }
void sltestFuelRateControlExample ( const EngSensors * dv15fgvzkq , real32_T
* houo3ih12p , Fueling_ModeType * c0kqngp5ge , kfgzjec0hk * localB ,
h5txqhwwth * localDW ) { int32_T b_previousEvent ; real32_T ll3k10w21n ;
real32_T iy5xr5q0yz ; localDW -> mhivhlq5d1 = f42hpq3d02 ; if ( localDW ->
bz1ypnwz02 < 511U ) { localDW -> bz1ypnwz02 ++ ; } if ( localDW -> o4cyqt01yu
. m1fyoxg5ll == 0U ) { localDW -> o4cyqt01yu . m1fyoxg5ll = 1U ; localDW ->
o4cyqt01yu . cbymrbpu22 = 1U ; localDW -> o4cyqt01yu . lrnaiftqmv =
kvv0qfwk24 ; if ( localDW -> o4cyqt01yu . lfv2jx2lln != nuv2f3x4tq ) {
localDW -> o4cyqt01yu . lfv2jx2lln = nuv2f3x4tq ; localDW -> bz1ypnwz02 = 0U
; } if ( localDW -> o4cyqt01yu . p4df0u25qy != 1U ) { localDW -> o4cyqt01yu .
p4df0u25qy = 1U ; } localDW -> o4cyqt01yu . cmxsgvof5k = db0wc4upmt ; if (
localDW -> o4cyqt01yu . mu5l2andm0 != 1U ) { localDW -> o4cyqt01yu .
mu5l2andm0 = 1U ; } localDW -> o4cyqt01yu . cicy20d1ya = db0wc4upmt ; if (
localDW -> o4cyqt01yu . d54ws1m3hr != 1U ) { localDW -> o4cyqt01yu .
d54ws1m3hr = 1U ; } localDW -> o4cyqt01yu . lqi4ycbrbi = db0wc4upmt ; localDW
-> o4cyqt01yu . cqepffoxqv = 1U ; localDW -> o4cyqt01yu . esepnq0lq0 =
poijygz4ie ; localDW -> o4cyqt01yu . nthl3jo4xz = 1U ; localB -> ip2hg4hncd =
* dv15fgvzkq ; localDW -> o4cyqt01yu . i24j1pe5bs = p4vqc40vay ; if ( localDW
-> o4cyqt01yu . grs0245ugm != nok2okzmci ) { localDW -> o4cyqt01yu .
grs0245ugm = nok2okzmci ; localDW -> o4cyqt01yu . efkz4gtkyi = nok2okzmci ;
localB -> dpqe5mrupf = LOW ; } localDW -> o4cyqt01yu . gdsldb3ugy =
m33avgaw5o ; localDW -> o4cyqt01yu . ko3zsunh0c = m33avgaw5o ; * c0kqngp5ge =
Fueling_ModeType_Warmup ; } else { if ( ! ( ( localDW -> o4cyqt01yu .
cbymrbpu22 == 0U ) || ( localDW -> o4cyqt01yu . lrnaiftqmv != kvv0qfwk24 ) )
) { localB -> ip2hg4hncd . ego = dv15fgvzkq -> ego ; switch ( localDW ->
o4cyqt01yu . lfv2jx2lln ) { case o5nghvr2l4 : if ( dv15fgvzkq -> ego <
amd2ef32flc . P_15 ) { localDW -> o4cyqt01yu . lfv2jx2lln = jxf1gloz4d ;
b_previousEvent = localDW -> mhivhlq5d1 ; localDW -> mhivhlq5d1 = cc0n5udzhc
; if ( localDW -> o4cyqt01yu . cqepffoxqv != 0U ) { fb1pl5cjaz ( dv15fgvzkq ,
c0kqngp5ge , localB , localDW ) ; } localDW -> mhivhlq5d1 = b_previousEvent ;
localDW -> o4cyqt01yu . lfv2jx2lln = cql2qfcciv ; localB -> d5fnkqyyhm = true
; } break ; case cql2qfcciv : if ( dv15fgvzkq -> ego > amd2ef32flc . P_15 ) {
localB -> d5fnkqyyhm = false ; localDW -> o4cyqt01yu . lfv2jx2lln =
jxf1gloz4d ; b_previousEvent = localDW -> mhivhlq5d1 ; localDW -> mhivhlq5d1
= omgdte33bt ; if ( localDW -> o4cyqt01yu . cqepffoxqv != 0U ) { fb1pl5cjaz (
dv15fgvzkq , c0kqngp5ge , localB , localDW ) ; } localDW -> mhivhlq5d1 =
b_previousEvent ; localDW -> o4cyqt01yu . lfv2jx2lln = o5nghvr2l4 ; } break ;
case nuv2f3x4tq : if ( localDW -> bz1ypnwz02 >= 480 ) { localDW -> o4cyqt01yu
. lfv2jx2lln = cql2qfcciv ; localB -> d5fnkqyyhm = true ; } break ; default :
localDW -> o4cyqt01yu . lfv2jx2lln = jxf1gloz4d ; break ; } } if ( localDW ->
o4cyqt01yu . p4df0u25qy != 0U ) { switch ( localDW -> o4cyqt01yu . cmxsgvof5k
) { case g2wo04nbbh : if ( ( dv15fgvzkq -> map > amd2ef32flc . P_19 ) && (
dv15fgvzkq -> map < amd2ef32flc . P_16 ) ) { localDW -> o4cyqt01yu .
cmxsgvof5k = jxf1gloz4d ; b_previousEvent = localDW -> mhivhlq5d1 ; localDW
-> mhivhlq5d1 = cc0n5udzhc ; if ( localDW -> o4cyqt01yu . cqepffoxqv != 0U )
{ fb1pl5cjaz ( dv15fgvzkq , c0kqngp5ge , localB , localDW ) ; } localDW ->
mhivhlq5d1 = b_previousEvent ; localDW -> o4cyqt01yu . cmxsgvof5k =
db0wc4upmt ; } else { localB -> kal4cjzqxv = dv15fgvzkq -> speed ; localB ->
mgqxcphn03 = dv15fgvzkq -> throttle ; localB -> pw3zl1fp2l =
look2_iflf_linlcapw ( localB -> kal4cjzqxv , localB -> mgqxcphn03 ,
amd2ef32flc . P_4 , amd2ef32flc . P_5 , amd2ef32flc . P_3 , amd2ef32flc .
P_46 , 18U ) ; localDW -> ig4nvl4xie = 4 ; localB -> ip2hg4hncd . map =
localB -> pw3zl1fp2l ; } break ; case db0wc4upmt : if ( ( dv15fgvzkq -> map >
amd2ef32flc . P_16 ) || ( dv15fgvzkq -> map < amd2ef32flc . P_19 ) ) {
localDW -> o4cyqt01yu . cmxsgvof5k = jxf1gloz4d ; b_previousEvent = localDW
-> mhivhlq5d1 ; localDW -> mhivhlq5d1 = omgdte33bt ; if ( localDW ->
o4cyqt01yu . cqepffoxqv != 0U ) { fb1pl5cjaz ( dv15fgvzkq , c0kqngp5ge ,
localB , localDW ) ; } localDW -> mhivhlq5d1 = b_previousEvent ; localDW ->
o4cyqt01yu . cmxsgvof5k = g2wo04nbbh ; } else { localB -> ip2hg4hncd . map =
dv15fgvzkq -> map ; } break ; default : localDW -> o4cyqt01yu . cmxsgvof5k =
jxf1gloz4d ; break ; } } if ( localDW -> o4cyqt01yu . mu5l2andm0 != 0U ) {
switch ( localDW -> o4cyqt01yu . cicy20d1ya ) { case g2wo04nbbh : if ( (
dv15fgvzkq -> throttle > amd2ef32flc . P_20 ) && ( dv15fgvzkq -> throttle <
amd2ef32flc . P_18 ) ) { localDW -> o4cyqt01yu . cicy20d1ya = jxf1gloz4d ;
b_previousEvent = localDW -> mhivhlq5d1 ; localDW -> mhivhlq5d1 = cc0n5udzhc
; if ( localDW -> o4cyqt01yu . cqepffoxqv != 0U ) { fb1pl5cjaz ( dv15fgvzkq ,
c0kqngp5ge , localB , localDW ) ; } localDW -> mhivhlq5d1 = b_previousEvent ;
localDW -> o4cyqt01yu . cicy20d1ya = db0wc4upmt ; } else { localB ->
kmm4g4le2x = dv15fgvzkq -> speed ; localB -> iukqnppa0i = dv15fgvzkq -> map ;
localB -> a5qzb2zxuc = look2_iflf_linlcapw ( localB -> kmm4g4le2x , localB ->
iukqnppa0i , amd2ef32flc . P_7 , amd2ef32flc . P_8 , amd2ef32flc . P_6 ,
amd2ef32flc . P_47 , 18U ) ; localDW -> dlujoo2clf = 4 ; localB -> ip2hg4hncd
. throttle = localB -> a5qzb2zxuc ; } break ; case db0wc4upmt : if ( (
dv15fgvzkq -> throttle > amd2ef32flc . P_18 ) || ( dv15fgvzkq -> throttle <
amd2ef32flc . P_20 ) ) { localDW -> o4cyqt01yu . cicy20d1ya = jxf1gloz4d ;
b_previousEvent = localDW -> mhivhlq5d1 ; localDW -> mhivhlq5d1 = omgdte33bt
; if ( localDW -> o4cyqt01yu . cqepffoxqv != 0U ) { fb1pl5cjaz ( dv15fgvzkq ,
c0kqngp5ge , localB , localDW ) ; } localDW -> mhivhlq5d1 = b_previousEvent ;
localDW -> o4cyqt01yu . cicy20d1ya = g2wo04nbbh ; } else { localB ->
ip2hg4hncd . throttle = dv15fgvzkq -> throttle ; } break ; default : localDW
-> o4cyqt01yu . cicy20d1ya = jxf1gloz4d ; break ; } } if ( localDW ->
o4cyqt01yu . d54ws1m3hr != 0U ) { switch ( localDW -> o4cyqt01yu . lqi4ycbrbi
) { case g2wo04nbbh : if ( dv15fgvzkq -> speed > 0.0F ) { localDW ->
o4cyqt01yu . lqi4ycbrbi = jxf1gloz4d ; b_previousEvent = localDW ->
mhivhlq5d1 ; localDW -> mhivhlq5d1 = cc0n5udzhc ; if ( localDW -> o4cyqt01yu
. cqepffoxqv != 0U ) { fb1pl5cjaz ( dv15fgvzkq , c0kqngp5ge , localB ,
localDW ) ; } localDW -> mhivhlq5d1 = b_previousEvent ; localDW -> o4cyqt01yu
. lqi4ycbrbi = db0wc4upmt ; } else { localB -> oevpdcpr1z = dv15fgvzkq ->
throttle ; localB -> cv0l3t3o2o = dv15fgvzkq -> map ; localB -> dgvuqwnq11 =
look2_iflf_linlcapw ( localB -> oevpdcpr1z , localB -> cv0l3t3o2o ,
amd2ef32flc . P_10 , amd2ef32flc . P_11 , amd2ef32flc . P_9 , amd2ef32flc .
P_48 , 17U ) ; if ( localB -> dgvuqwnq11 > amd2ef32flc . P_12 ) { localB ->
dgvuqwnq11 = amd2ef32flc . P_12 ; } else { if ( localB -> dgvuqwnq11 <
amd2ef32flc . P_13 ) { localB -> dgvuqwnq11 = amd2ef32flc . P_13 ; } }
localDW -> pijcpfwuns = 4 ; localB -> ip2hg4hncd . speed = localB ->
dgvuqwnq11 ; } break ; case db0wc4upmt : if ( ( dv15fgvzkq -> speed == 0.0F )
&& ( dv15fgvzkq -> map < amd2ef32flc . P_21 ) ) { localDW -> o4cyqt01yu .
lqi4ycbrbi = jxf1gloz4d ; b_previousEvent = localDW -> mhivhlq5d1 ; localDW
-> mhivhlq5d1 = omgdte33bt ; if ( localDW -> o4cyqt01yu . cqepffoxqv != 0U )
{ fb1pl5cjaz ( dv15fgvzkq , c0kqngp5ge , localB , localDW ) ; } localDW ->
mhivhlq5d1 = b_previousEvent ; localDW -> o4cyqt01yu . lqi4ycbrbi =
g2wo04nbbh ; } else { localB -> ip2hg4hncd . speed = dv15fgvzkq -> speed ; }
break ; default : localDW -> o4cyqt01yu . lqi4ycbrbi = jxf1gloz4d ; break ; }
} if ( localDW -> o4cyqt01yu . cqepffoxqv != 0U ) { fb1pl5cjaz ( dv15fgvzkq ,
c0kqngp5ge , localB , localDW ) ; } if ( localDW -> o4cyqt01yu . nthl3jo4xz
!= 0U ) { cuteyyu0y4 ( dv15fgvzkq , c0kqngp5ge , localB , localDW ) ; } }
ll3k10w21n = look2_iflf_linlcapw ( localB -> ip2hg4hncd . speed , localB ->
ip2hg4hncd . map , amd2ef32flc . P_37 , amd2ef32flc . P_38 , amd2ef32flc .
P_36 , amd2ef32flc . P_49 , 18U ) ; localDW -> n025f2dqas = localB ->
ip2hg4hncd . throttle - amd2ef32flc . P_40 [ 1 ] * localDW -> g4epmevidu ; if
( localB -> d5fnkqyyhm && ( localB -> dpqe5mrupf == amd2ef32flc . P_50 ) ) {
iy5xr5q0yz = look2_iflf_linlcapw ( localB -> ip2hg4hncd . speed , localB ->
ip2hg4hncd . map , amd2ef32flc . P_1 , amd2ef32flc . P_2 , amd2ef32flc . P_0
, amd2ef32flc . P_45 , 6U ) ; localB -> iehrs1bfti = ( ( real32_T ) ( localB
-> ip2hg4hncd . ego <= amd2ef32flc . P_33 ) - amd2ef32flc . P_32 ) *
iy5xr5q0yz ; } else { localB -> iehrs1bfti = amd2ef32flc . P_51 ; } switch (
localB -> dpqe5mrupf ) { case LOW : iy5xr5q0yz = amd2ef32flc . P_42 ; break ;
case RICH : iy5xr5q0yz = amd2ef32flc . P_43 ; break ; default : iy5xr5q0yz =
amd2ef32flc . P_44 ; break ; } ll3k10w21n = ( ( amd2ef32flc . P_39 [ 0 ] *
localDW -> n025f2dqas + amd2ef32flc . P_39 [ 1 ] * localDW -> g4epmevidu ) +
localB -> ip2hg4hncd . speed * ll3k10w21n * localB -> ip2hg4hncd . map ) *
iy5xr5q0yz ; switch ( localB -> dpqe5mrupf ) { case LOW : localDW ->
ggfpxzfbem = 0 ; break ; case RICH : localDW -> ggfpxzfbem = 1 ; break ;
default : localDW -> ggfpxzfbem = 2 ; break ; } switch ( localDW ->
ggfpxzfbem ) { case 0 : localDW -> cvumlszwxd = localDW -> gdxty0epfl -
amd2ef32flc . P_24 [ 1 ] * localDW -> fqey34mmcf ; * houo3ih12p = (
amd2ef32flc . P_23 [ 0 ] * localDW -> cvumlszwxd + amd2ef32flc . P_23 [ 1 ] *
localDW -> fqey34mmcf ) + ll3k10w21n ; srUpdateBC ( localDW -> pnov14j1k0 ) ;
break ; case 1 : * houo3ih12p = amd2ef32flc . P_27 [ 1 ] * localDW ->
cjlqjt3njc ; localB -> dxlqievcka = ll3k10w21n + localDW -> gdxty0epfl ;
srUpdateBC ( localDW -> kssslji0xj ) ; break ; case 2 : * houo3ih12p =
amd2ef32flc . P_31 ; srUpdateBC ( localDW -> gqfqobi2yn ) ; break ; } } void
sltestFuelRateControlExampleTID1 ( void ) { } void pvfpzm2zah ( kfgzjec0hk *
localB , h5txqhwwth * localDW ) { localDW -> gdxty0epfl += amd2ef32flc . P_34
* localB -> iehrs1bfti ; localDW -> g4epmevidu = localDW -> n025f2dqas ;
switch ( localDW -> ggfpxzfbem ) { case 0 : localDW -> fqey34mmcf = localDW
-> cvumlszwxd ; break ; case 1 : localDW -> cjlqjt3njc = localB -> dxlqievcka
- amd2ef32flc . P_28 [ 1 ] * localDW -> cjlqjt3njc ; break ; case 2 : break ;
} } void pvfpzm2zahTID1 ( void ) { } void lwz40dwdzm ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , oh0equzdk0 * const
lxv1rtbads , kfgzjec0hk * localB , h5txqhwwth * localDW , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) lxv1rtbads , 0 , sizeof
( oh0equzdk0 ) ) ; i0sf2npjx0 [ 0 ] = mdlref_TID0 ; i0sf2npjx0 [ 1 ] =
mdlref_TID1 ; lxv1rtbads -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; ( void ) memset
( ( ( void * ) localB ) , 0 , sizeof ( kfgzjec0hk ) ) ; { localB ->
ip2hg4hncd = sltestFuelRateControlExample_rtZEngSensors ; localB ->
iehrs1bfti = 0.0F ; localB -> dxlqievcka = 0.0F ; localB -> kal4cjzqxv = 0.0F
; localB -> mgqxcphn03 = 0.0F ; localB -> kmm4g4le2x = 0.0F ; localB ->
iukqnppa0i = 0.0F ; localB -> oevpdcpr1z = 0.0F ; localB -> cv0l3t3o2o = 0.0F
; localB -> dgvuqwnq11 = 0.0F ; localB -> a5qzb2zxuc = 0.0F ; localB ->
pw3zl1fp2l = 0.0F ; localB -> dpqe5mrupf = LOW ; } ( void ) memset ( ( void *
) localDW , 0 , sizeof ( h5txqhwwth ) ) ; localDW -> gdxty0epfl = 0.0F ;
localDW -> g4epmevidu = 0.0F ; localDW -> cjlqjt3njc = 0.0F ; localDW ->
fqey34mmcf = 0.0F ; localDW -> n025f2dqas = 0.0F ; localDW -> cvumlszwxd =
0.0F ; sltestFuelRateControlExample_InitializeDataMapInfo ( lxv1rtbads ,
localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( lxv1rtbads -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
lxv1rtbads -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( lxv1rtbads -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_sltestFuelRateControlExample_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_sltestFuelRateControlExample , 51 ) ; * retVal = 1 ; } static void
mr_sltestFuelRateControlExample_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_sltestFuelRateControlExample_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_sltestFuelRateControlExample_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_sltestFuelRateControlExample_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) ; static void
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i ,
j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_sltestFuelRateControlExample_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_sltestFuelRateControlExample_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_sltestFuelRateControlExample_restoreDataFromMxArrayWithOffset ( void
* destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_sltestFuelRateControlExample_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_sltestFuelRateControlExample_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_sltestFuelRateControlExample_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_sltestFuelRateControlExample_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_sltestFuelRateControlExample_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_sltestFuelRateControlExample_GetDWork
( const kvmiw41uugl * mdlrefDW ) { static const char * dwFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , dwFieldNames ) ;
mr_sltestFuelRateControlExample_cacheDataAsMxArray ( ssDW , 0 , 0 , & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
dwFieldNames [ 36 ] = { "mdlrefDW->rtdw.gdxty0epfl" ,
"mdlrefDW->rtdw.g4epmevidu" , "mdlrefDW->rtdw.cjlqjt3njc" ,
"mdlrefDW->rtdw.fqey34mmcf" , "mdlrefDW->rtdw.n025f2dqas" ,
"mdlrefDW->rtdw.cvumlszwxd" , "mdlrefDW->rtdw.mhivhlq5d1" ,
"mdlrefDW->rtdw.o4cyqt01yu.lfv2jx2lln" ,
"mdlrefDW->rtdw.o4cyqt01yu.cmxsgvof5k" ,
"mdlrefDW->rtdw.o4cyqt01yu.cicy20d1ya" ,
"mdlrefDW->rtdw.o4cyqt01yu.lqi4ycbrbi" ,
"mdlrefDW->rtdw.o4cyqt01yu.esepnq0lq0" ,
"mdlrefDW->rtdw.o4cyqt01yu.ks101l5lkk" ,
"mdlrefDW->rtdw.o4cyqt01yu.i24j1pe5bs" ,
"mdlrefDW->rtdw.o4cyqt01yu.iiadmwmliq" ,
"mdlrefDW->rtdw.o4cyqt01yu.grs0245ugm" ,
"mdlrefDW->rtdw.o4cyqt01yu.efkz4gtkyi" ,
"mdlrefDW->rtdw.o4cyqt01yu.gdsldb3ugy" ,
"mdlrefDW->rtdw.o4cyqt01yu.ko3zsunh0c" ,
"mdlrefDW->rtdw.o4cyqt01yu.m1fyoxg5ll" ,
"mdlrefDW->rtdw.o4cyqt01yu.lrnaiftqmv" ,
"mdlrefDW->rtdw.o4cyqt01yu.cbymrbpu22" ,
"mdlrefDW->rtdw.o4cyqt01yu.p4df0u25qy" ,
"mdlrefDW->rtdw.o4cyqt01yu.mu5l2andm0" ,
"mdlrefDW->rtdw.o4cyqt01yu.d54ws1m3hr" ,
"mdlrefDW->rtdw.o4cyqt01yu.cqepffoxqv" ,
"mdlrefDW->rtdw.o4cyqt01yu.nthl3jo4xz" ,
"mdlrefDW->rtdw.o4cyqt01yu.byfduinobf" , "mdlrefDW->rtdw.bz1ypnwz02" ,
"mdlrefDW->rtdw.ggfpxzfbem" , "mdlrefDW->rtdw.pnov14j1k0" ,
"mdlrefDW->rtdw.kssslji0xj" , "mdlrefDW->rtdw.gqfqobi2yn" ,
"mdlrefDW->rtdw.ig4nvl4xie" , "mdlrefDW->rtdw.dlujoo2clf" ,
"mdlrefDW->rtdw.pijcpfwuns" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 36 , dwFieldNames ) ;
mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 0 , & (
mdlrefDW -> rtdw . gdxty0epfl ) , sizeof ( mdlrefDW -> rtdw . gdxty0epfl ) )
; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 1 , & (
mdlrefDW -> rtdw . g4epmevidu ) , sizeof ( mdlrefDW -> rtdw . g4epmevidu ) )
; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 2 , & (
mdlrefDW -> rtdw . cjlqjt3njc ) , sizeof ( mdlrefDW -> rtdw . cjlqjt3njc ) )
; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 3 , & (
mdlrefDW -> rtdw . fqey34mmcf ) , sizeof ( mdlrefDW -> rtdw . fqey34mmcf ) )
; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 4 , & (
mdlrefDW -> rtdw . n025f2dqas ) , sizeof ( mdlrefDW -> rtdw . n025f2dqas ) )
; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 5 , & (
mdlrefDW -> rtdw . cvumlszwxd ) , sizeof ( mdlrefDW -> rtdw . cvumlszwxd ) )
; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 6 , & (
mdlrefDW -> rtdw . mhivhlq5d1 ) , sizeof ( mdlrefDW -> rtdw . mhivhlq5d1 ) )
; mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 7 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . lfv2jx2lln ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 8 , (
uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . cmxsgvof5k ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 9 , (
uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . cicy20d1ya ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 10 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . lqi4ycbrbi ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 11 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . esepnq0lq0 ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 12 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . ks101l5lkk ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 13 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . i24j1pe5bs ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 14 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . iiadmwmliq ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 15 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . grs0245ugm ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 16 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . efkz4gtkyi ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 17 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . gdsldb3ugy ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 18 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . ko3zsunh0c ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 19 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . m1fyoxg5ll ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 20 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . lrnaiftqmv ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 21 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . cbymrbpu22 ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 22 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . p4df0u25qy ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 23 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . mu5l2andm0 ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 24 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . d54ws1m3hr ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 25 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . cqepffoxqv ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 26 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . nthl3jo4xz ) ;
mr_sltestFuelRateControlExample_cacheBitFieldToMxArray ( rtdwData , 0 , 27 ,
( uint_T ) mdlrefDW -> rtdw . o4cyqt01yu . byfduinobf ) ;
mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 28 , & (
mdlrefDW -> rtdw . bz1ypnwz02 ) , sizeof ( mdlrefDW -> rtdw . bz1ypnwz02 ) )
; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 29 , &
( mdlrefDW -> rtdw . ggfpxzfbem ) , sizeof ( mdlrefDW -> rtdw . ggfpxzfbem )
) ; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 30 ,
& ( mdlrefDW -> rtdw . pnov14j1k0 ) , sizeof ( mdlrefDW -> rtdw . pnov14j1k0
) ) ; mr_sltestFuelRateControlExample_cacheDataAsMxArray ( rtdwData , 0 , 31
, & ( mdlrefDW -> rtdw . kssslji0xj ) , sizeof ( mdlrefDW -> rtdw .
kssslji0xj ) ) ; mr_sltestFuelRateControlExample_cacheDataAsMxArray (
rtdwData , 0 , 32 , & ( mdlrefDW -> rtdw . gqfqobi2yn ) , sizeof ( mdlrefDW
-> rtdw . gqfqobi2yn ) ) ; mr_sltestFuelRateControlExample_cacheDataAsMxArray
( rtdwData , 0 , 33 , & ( mdlrefDW -> rtdw . ig4nvl4xie ) , sizeof ( mdlrefDW
-> rtdw . ig4nvl4xie ) ) ; mr_sltestFuelRateControlExample_cacheDataAsMxArray
( rtdwData , 0 , 34 , & ( mdlrefDW -> rtdw . dlujoo2clf ) , sizeof ( mdlrefDW
-> rtdw . dlujoo2clf ) ) ; mr_sltestFuelRateControlExample_cacheDataAsMxArray
( rtdwData , 0 , 35 , & ( mdlrefDW -> rtdw . pijcpfwuns ) , sizeof ( mdlrefDW
-> rtdw . pijcpfwuns ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
return ssDW ; } void mr_sltestFuelRateControlExample_SetDWork ( kvmiw41uugl *
mdlrefDW , const mxArray * ssDW ) {
mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW -> rtb
) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData
= mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw
. gdxty0epfl ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . gdxty0epfl )
) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . g4epmevidu ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
g4epmevidu ) ) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . cjlqjt3njc ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW ->
rtdw . cjlqjt3njc ) ) ;
mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw
. fqey34mmcf ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . fqey34mmcf )
) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . n025f2dqas ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw .
n025f2dqas ) ) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . cvumlszwxd ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW ->
rtdw . cvumlszwxd ) ) ;
mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw
. mhivhlq5d1 ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . mhivhlq5d1 )
) ; mdlrefDW -> rtdw . o4cyqt01yu . lfv2jx2lln =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 , 7
, 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . cmxsgvof5k =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 , 8
, 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . cicy20d1ya =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 , 9
, 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . lqi4ycbrbi =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
10 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . esepnq0lq0 =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
11 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . ks101l5lkk =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
12 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . i24j1pe5bs =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
13 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . iiadmwmliq =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
14 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . grs0245ugm =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
15 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . efkz4gtkyi =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
16 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . gdsldb3ugy =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
17 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . ko3zsunh0c =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
18 , 2 ) ; mdlrefDW -> rtdw . o4cyqt01yu . m1fyoxg5ll =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
19 , 1 ) ; mdlrefDW -> rtdw . o4cyqt01yu . lrnaiftqmv =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
20 , 1 ) ; mdlrefDW -> rtdw . o4cyqt01yu . cbymrbpu22 =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
21 , 1 ) ; mdlrefDW -> rtdw . o4cyqt01yu . p4df0u25qy =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
22 , 1 ) ; mdlrefDW -> rtdw . o4cyqt01yu . mu5l2andm0 =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
23 , 1 ) ; mdlrefDW -> rtdw . o4cyqt01yu . d54ws1m3hr =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
24 , 1 ) ; mdlrefDW -> rtdw . o4cyqt01yu . cqepffoxqv =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
25 , 1 ) ; mdlrefDW -> rtdw . o4cyqt01yu . nthl3jo4xz =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
26 , 1 ) ; mdlrefDW -> rtdw . o4cyqt01yu . byfduinobf =
mr_sltestFuelRateControlExample_extractBitFieldFromMxArray ( rtdwData , 0 ,
27 , 1 ) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . bz1ypnwz02 ) , rtdwData , 0 , 28 , sizeof ( mdlrefDW ->
rtdw . bz1ypnwz02 ) ) ;
mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw
. ggfpxzfbem ) , rtdwData , 0 , 29 , sizeof ( mdlrefDW -> rtdw . ggfpxzfbem )
) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . pnov14j1k0 ) , rtdwData , 0 , 30 , sizeof ( mdlrefDW -> rtdw .
pnov14j1k0 ) ) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . kssslji0xj ) , rtdwData , 0 , 31 , sizeof ( mdlrefDW ->
rtdw . kssslji0xj ) ) ;
mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw
. gqfqobi2yn ) , rtdwData , 0 , 32 , sizeof ( mdlrefDW -> rtdw . gqfqobi2yn )
) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . ig4nvl4xie ) , rtdwData , 0 , 33 , sizeof ( mdlrefDW -> rtdw .
ig4nvl4xie ) ) ; mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . dlujoo2clf ) , rtdwData , 0 , 34 , sizeof ( mdlrefDW ->
rtdw . dlujoo2clf ) ) ;
mr_sltestFuelRateControlExample_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw
. pijcpfwuns ) , rtdwData , 0 , 35 , sizeof ( mdlrefDW -> rtdw . pijcpfwuns )
) ; } } void mr_sltestFuelRateControlExample_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 1462350462U , 4270306379U ,
1514340933U , 2147868821U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"sltestFuelRateControlExample" , & chksum [ 0 ] ) ; } mxArray *
mr_sltestFuelRateControlExample_GetSimStateDisallowedBlocks ( ) { return NULL
; }
