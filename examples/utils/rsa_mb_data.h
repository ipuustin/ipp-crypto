/*******************************************************************************
* Copyright 2019-2020 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Intel® Integrated Performance Primitives Cryptography (Intel® IPP Cryptography) */

/*!
  *
  * \file
  * \brief The header contains pre-generated initial data for RSA multi buffer encryption and decryption.
  *
  */

#ifndef RSA_MB_DATA_H_
#define RSA_MB_DATA_H_

const int NUMBER_OF_BUFFERS = 8;
const int NUMBER_OF_REQUESTS = 18;
const int NUMBER_OF_CRYPTOSYSTEMS = 10;

/*! Ten 1024-bit RSA Modulo N = P*Q */
static BigNumber N1("0x803592FEE464EF01A013527FA3EB96B1770DDEE9BA28A1DA5CF748E7224912B13F960F896212B1653E0CC0856D98CC46628681A1FBEBC0"
    "58ACACCBA67DF2E8524AED315B08E52A05DF151B516141122667327FD4D5795E2A93B00676F9C01AE5B1F4CC2EED4769333D9531E6B35B5"
    "360070C29E6CFCA03619C01ECB08538BC5F");
static BigNumber N2("0x88D3DB04B26480534E9DE28AA544441D53541301D207FFD78B4E3E78B2ECA9D833B66549156E38E1E6F95B3EC529A8987ED48AE448FCC7"
    "7972604BADFF39E465CC567BFA02C54BFF310CEDAEB88E50BCDF75F951C000E8A5A48346E75642509F387F552588FD21D38D137F4A6A486"
    "195C585BF41D394F2E3BA37877114A7451F");
static BigNumber N3("0x825DCD781A00B2E7F03472B1250F3B6861EBD299B0EBB47BAF063C71C774AE1FC1B7FB26AC30D467E4B41E54FCCBCEFC85F932BA545B45"
    "98DD082BBFD4971820668AE1E86E0B94CF6AE49D2099CFAEE09CAAAB303B81C2B07D4C9CD839ABD67F873AF22BC260D7C3A183D36DF3450"
    "CEE02C7BB1223CBF6F30DB67579E47D2159");
static BigNumber N4("0x8C423CC8B651C5B7108066CD2D7288BA8BC36D75CD1BA7D7BF7C2987947C7473FD3579E078CA62CBF401D03D8EC5BEEB7F05D6BA6616AC"
    "EFA7C8E308F90BD16B5C06DD6C0DBEEB1DF46F4AE52669392D70CB0562A92B06C9FA89A4BB21006C3D6D42A0D1B8A61220F1D8E85F76602"
    "B4B0FFC566A210F879586304377B3F603C7");
static BigNumber N5("0xAE2C5C86B3901BF387C69299CD588BACB3431741F1AEAD841E0C47A7690C074926F43865B51C2F4F90CA2D472EF43EBD7D9B0E849FA380"
    "FED3B430BFD15BDB6F0EE9C3FB9CEA52235E979FE469F2A818924DB2401BDA33055B31C121A76A1D17F48BD33857E4950E0A029DE5D1105"
    "ACC557B9D077BD62459AA302FA8FD35AAB3");
static BigNumber N6("0x9846233176884AF96D1A5041456756EB06338F54B7E5A125DD07FE8563239579D3307648BF3AED67D8F442F6111ACD287BFEF9AF963C25"
    "392D6402DB58D3889FB3B994C124E53404B28E03ED354F4218E7B3EEAC25EF5DCC65827321637C2B86C4946D764C8058012B33D43077B59"
    "68F77B2DD6B496B37AD57142D3D92818C03");
static BigNumber N7("0x9BF69A1BCB73C12489410D9E9105D9CC32FA7BB568DBB2293E821A2B035AE652A7826C0355770F66AE191B1B8602BE01F1784628BC67EE"
    "38422CEDFF48DDD30FB0901993FB2D186EC70D3A28580B5579C7060250B8D002750DE87C4AAB8F5BF6D5397941AF65CD385C06CCAE2FE03"
    "0D04FD94BF2DC248D37FDBA7562984EC90D");
static BigNumber N8("0x811C84D8CEC922D03FEF32327362086C036A129BD2D7D0D6294A041C49F4E5CA3E7B5F7810F9D7C1EFF84D6F79A72936A3639F3D561C0B"
    "6812B293026E3406C91168EB4C6F141496224117FF4CA6B9B311334ACD78568DECD43C940847B3901C1A0E795CF30C572242BC0261B36AD"
    "D7EA2F1964E6F3CAE43DD7D30F820CE4AF7");
static BigNumber N9("0x99E37A5FDC20D21B1E0A40282BF21AE04EAB61270617480CBB92749DE3A66253E2FB36C511ED46460F060FA745697F6821B14E3BFA692A"
    "2BFAB61CDBD72F438515E48418C6FDC01568E39FDD743586AB76CF5A3F01360D03A4E96CDF4E7D25D78F9F3D3D6BD3DBCCBCEC3101865CA"
    "67C7270A0444C254179F90FED4D0912691B");
static BigNumber N10("0x878339258B34F41A22BD81F5F89BA047152BCAE6B065C1518470FA15FDD4FF405F3AA515C559A236234B2F36B6DFB28179FD97F62860A"
    "99770E72EC60B086235C5FDC34299751A26480EB5F46D64425F6E9657731D99363417BB82F9C01B386CBC0F44AFB2D6DF86F78D284C678F"
    "F1568DF86C754A456E16C1D97285D5B3ED65");

/*! Public exponent */
static BigNumber E("0x010001");

/*! Ten private exponents */
static BigNumber D1("0x7AABC8141E8FFCA77F743D71677418E1805A43393B277985A781EBBD4B6EC375D8B349F657622F5E017ACE125C84E09F4FD206E2E859EF"
    "D6689184E1AE8CE67FB9B56C3D42052FDACE4A2EB233EDA40A6E538DF53D19F2ADC886767F7157A1B2FCFF5CDCBF5EB4A822053AB2A4FB9"
    "B1AAECB4EF408AEE537BD10922757957401");
static BigNumber D2("0x2E15FD7D3580F86016E8C2F723F73C620C41132DD7CA6DF7F1A9E70CCC673E45DE151F44607D8197452ED3F6EE7DBB95B192713DB6FFBD"
    "4840A802959693AF43C2B23D6C6CF36972B35DDB8FD8988AFD8DD2972701E62C230D5E35157A737B56BC9CD4EE3C3A62CBFC470898569E9"
    "B5AC272D03467858621A55159596DB63281");
static BigNumber D3("0x2A8F1AEBD17956EE9721582BF2904571AF3E0073C22940B37C110A1C8EE3CD907A7A689858705C774A576EEB89D7B34C0724B265D7F230"
    "0756693B77159CF9F7E727F34B301D00641381679DB33DA9B9827ADD711962564C9ED86A22C26EC6B496B1361F8DB1189005DF70865E229"
    "BC8CD28E9A4B173812B73C725D5726CC02D");
static BigNumber D4("0x0D4EB389AF92AE99A1DD2CE3C6AE193EE9C7CEF8E04F016BBCE540E3763920AB6898CC4979EC69D743FD700E871F47EFFC0B47C643AD5F"
    "1715EA3F703880E08B940E0D9BD14D39630D05566D1BD5CB7324435A20203FCDFD10C23A898CE589A47491F881D75620030BA47EB5C67AE"
    "08C92715BA522275251A26234A48A846981");
static BigNumber D5("0x332F9E5187DBC61B1FBFDFBD8B778634CEC9DCBFE882E94376812D5DA9A57B4EA8400582FE62B614AFFC7AA9FCC692D9A55C383C099E47"
    "7E9C40CC42D30827C8536F027187ABDFCA7BC71A086CF7CED1AE9F26670F155A8B7675CB6B3A0CA16D6F33C664620657F284FD6A344E318"
    "841E81A48296B7ED707B92D5945A4D04701");
static BigNumber D6("0x35DEB23AA0756D18BA89519515C98E4D4CFF5698A10A42AD5379AD8860DF48D5356A729E1FD0E8061211AFD2BF905CBE12C7CC6B5AD9E2"
    "4D4D0A919C29DB83FC777A2FA05DE5DDC52FC396D3757B6E7037C0B1E3EDB0FE99D94D8F692973008844F8EEFE2CF6F36BB193E3B720C52"
    "EEE2E97F129546D5084700F8FD437026529");
static BigNumber D7("0x7558C06F354F2CFD6E8011DD42C4A230F012634E054D77E96C6CBB7FAD909147935DA0238A04810402EE44E51A99A99910B42C25AE4C8C"
    "82ABD7DE627BD2DB5FFFF81AB654A203D667F60840B97AA66A71ED86FD91EDE253B6E7501316994B61EFB05E223BCEFB2474807065EABD9"
    "61BF2712461598E2237AC63320042D26D01");
static BigNumber D8("0x26442D9B94AE4883306FD490DF61CEDD34A5DB9E137FA385D5F6FA00E86A8D30C4140CD7A93063A2375D8095E99881BE8FEE96E3B701D8"
    "DF9FAB0DA74AC260C00A24A52484AE50591A6ECA266AEC0620705D5931F5C6EEF81F8D03BCF8D687B99B0D3C70DDB95E3475C42F42E916D"
    "047CAF955EF5AB19E999699C9EB471A1501");
static BigNumber D9("0x0A709236BA9A4766AB8D0A792F32077CBC198847BB740CE140405944F4D2AECCFE1308CE29BF2D0B47ADA396377146C16BB7B994FC11F25"
    "87573B15580ADA628DFF62C3FBB5B7A8E45FC987AC9ECF3081D70D2906F2D671613872F5147ACCBE788A6DAEAC85099102C8C3D09896A33"
    "FA7200FD0FA838AF49555D6F538C288371");
static BigNumber D10("0x7229CEFF1E23E272124A6D2E77DF444C1E3DE2962E8DCB2B8DD4501C2ED83EA25097EB7447EA9789DC79FEB0ADA80F8E9CE3541E812DCE"
    "32535FB03C101764048772FEA8ED591E7BD7C1EDACBDA00B82C5255BAB599BE33060568C90A5C67F1FFC6502E31595EC258DE3AB13ACE36"
    "534694AC7B42A9F8992872D77BEB13A9781");

/*! Ten plain text source messages */
static BigNumber sourceMessage1("0x6C874DB1FD6452F9316632FF35294FDF3251A31E807F8033609DCC9BE8302084E75A4DC3BEC614DF11A22CAA57816CC1C4"
    "484934F5E48F0F5C694C3CFA2AAF07D08D17559128BC5ECD6F922D867B93A8477D756646619104C22135595BAF90B1D6540F96FE657BB1F"
    "A8E452975099FFC74D7ACDB1932E4AC8C45E6F3C2107D06");
static BigNumber sourceMessage2("0x32E75B589A091418B7AE33204E3FE516586D151E37D74E4A3C5EA6670B78909042814B74F15AE9CB8FAEF82B30630A5751"
    "4D316ECE4EAE8ECFC8DA36B8B2CED5A76D11114F701880C3DD278CF6ABD02FACA0BFF7D2D3676664DF0B33E6E901F3103BACB5B0E1CE27C"
    "E8193ED7E439E378A904542ADE2A7D9A07A91668E4823D4");
static BigNumber sourceMessage3("0x27899F3047A76BD190F03E3A2D0BC38CCF6A44F087F71A33A3F22FB19D42105DCC5CCB7B88D946B62347C027BA9A8C36A1"
    "5FA8511A7B2E723E3ECF04020266066868822715E63FCBA62ED76C43DF044B469FD2FAB20A189D5ACB9D4B016DF8A3D68B2CB6B4C253CD3"
    "5AE0E031ED44D983D40F49286B309F54BF2B112C71CF0A1");
static BigNumber sourceMessage4("0x6C01F8914C0EA0004935485FB29265EAFC280FA12939065B412F42FC7D5B898A55AA27F7328003C61AB9BF82F7024C06DD"
    "FFD1FFF9F831AFE954CD1873732EEABACF71F351D2B5D0D98272A438A2C4D4A32D5C6F5C69D0EEB34CEE02B52B36B69B23B07A8346C1C6E"
    "B43C6C49194F9D683B3B234EA6BA71962EC0CC6F5270256");
static BigNumber sourceMessage5("0x01D21D23F499BB24FABF6A916F5697F7960D7E83FDDB5260001BA8D98683C99DA4F73F965E91A169A9C7BF3AEF4EED0FA4"
    "198A3DF8DE2CCD1559EEEEF570323698CAEA282C1D1F5D4A3702DE1EEB7355DBD8C5FBDEADD762CA58AE61631980A6DD5115DBB8B3D3B13"
    "F7988EEE8ECAD20A5EC3F4B84943C4AD87150CFFE666E48");
static BigNumber sourceMessage6("0x6C4E9B7AAE9125ACB6777AB3078F7D50E38FD6A7705EF3CB0C35B6AF29F1B37C46C6449574FFA18A52DA1D4F6547B33BC5"
    "D509DCE254AA7C262E042A79B86FCF079B466AD679515D9E7419BFC6769232D027731A096F852CCCB142070CAA712F06616431473E1D196"
    "BC5C497753F8034752306867C483DAF4481DD4479A6DBBE");
static BigNumber sourceMessage7("0x442C4DAA5D96A7CE8241818FD746FCDD9D8355318A55E8C012E4E1E54685BCB79D1307243B9DCD4F361138C13F39C80349"
    "16DD2A09D6E62A80BCD308902600AB1D9E74DDB0A14CE94D66C60E1638D77CAB8A017EB93105524356A6D12A252CBF92C40604DB88F9A03"
    "0021B50DCC76E836153442EC53387B9AFD71AA2A3E36896");
static BigNumber sourceMessage8("0x36B24B1232B5A5CA41F8D60C6833A464B86BF709EF3A9B0629FAA8CF5B1E3895452D3CE77C545F255D2D5B40BF77A372E5"
    "DFCC47437D965F8B143E92247B27F260CDA70EB95C4C1B53D25B17147FF8060FD8D78DC02FE8381C7ECD7536C2D091CC1709E0AD672C949"
    "49D7E0667877D9FC519FE201CAEF3DED0664EF5DD4E8F62");
static BigNumber sourceMessage9("0x013AD66EBBB10F0994B507F66CB200A2C1C2B1A157D1D2B948579626E87A1C71EE7A4F14F10BE4FE7BC834609285F93290"
    "F41AFC6A22D1210DD9CA16B6C7B4717E6F01D89B1429411335DBEE86E978CFB51AF1BA7BFA6105F78611EAC20CDF3D4872A260B15ADCA08"
    "9ECA42667928EE5410061E8BD111535C5BE523DD27354A4");
static BigNumber sourceMessage10("0x2506614B7F5D75912AAD296329DB040D7DF2CDCBC6D87EFD061BE43C05B04C99D8F5FE318ED56A8CF0652F64BA5837EC0"
    "16264827A2A550439130EEDD393A3CD0D8D6B96012A4CB2BA597DED57A9070690A441ADFCED1B73304E680323235F1A68E8EA787F2B22B3"
    "8F1CF4216EEF673B6017D4AC724B0472354BEFA39E8BC9C1");

/*! Array of ten 1024-bit RSA Modulo N = P*Q */
static BigNumber moduloArray[NUMBER_OF_CRYPTOSYSTEMS] = { N1, N2, N3, N4, N5, N6, N7, N8, N9, N10 };

/*! Array of ten private exponents */
static BigNumber privateExpArray[NUMBER_OF_CRYPTOSYSTEMS] = { D1, D2, D3, D4, D5, D6, D7, D8, D9, D10 };

/*! Array of ten plain text source messages */
static IppsBigNumState* plainTextArray[NUMBER_OF_CRYPTOSYSTEMS] = {
                                            sourceMessage1,
                                            sourceMessage2,
                                            sourceMessage3,
                                            sourceMessage4,
                                            sourceMessage5,
                                            sourceMessage6,
                                            sourceMessage7,
                                            sourceMessage8,
                                            sourceMessage9,
                                            sourceMessage10 };

#endif /* #ifndef RSA_MB_DATA_H_ */