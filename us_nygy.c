// Keyboard layouts for the United States of America.

default partial alphanumeric_keys
xkb_symbols "basic" {

    name[Group1]= "nygy custom for SATECHI";

    key <TLDE>	{[   0,	 asciitilde	]};  //[49,    "0",    0x30,   "*",    0x2a,    ,  ],
    key <AE01>	{[	 1,	 0x27       ]};  //[10,    "1",    0x31,   "'",    0x27,    ,  ],
    key <AE02>	{[	 2,	 0x1000022  ]};  //[11,    "2",    0x32,   """,    0x22,    ,  ],
    key <AE03>	{[	 3,	 U+002B     ]};  //[12,    "3",    0x33,   "+",    0x2b,    ,  ],
    key <AE04>	{[	 4,	 U0021		]};  //[13,    "4",    0x34,   "!",    0xa7,    ,  ],
    key <AE05>	{[	 5,  percent	]};  //[14,    "5",    0x35,   "%",    0x25,    ,  ],

    key <AE06>	{[	 6,	 asciicircum]};
    key <AE07>	{[	 7,	 ampersand	]};
    key <AE08>	{[	 8,	 asterisk	]};
    key <AE09>	{[	 9,	 parenleft	]};
    key <AE10>	{[	 0,	 parenright	]};
    key <AE11>	{[   minus,	 underscore	]};
    key <AE12>	{[   equal,	 plus		]};

    key <AD01>	{[	 q,	 Q		]};
    key <AD02>	{[	 w,	 W		]};
    key <AD03>	{[	 e,	 E		]};
    key <AD04>	{[	 r,	 R		]};
    key <AD05>	{[	 t,	 T		]};
    key <AD06>	{[	 y,	 Y		]};
    key <AD07>	{[	 u,	 U		]};
    key <AD08>	{[	 i,	 I		]};
    key <AD09>	{[	 o,	 O		]};
    key <AD10>	{[	 p,	 P		]};
    key <AD11>	{[ bracketleft,	 braceleft	]};
    key <AD12>	{[ bracketright, braceright	]};

    key <AC01>	{[	 a,	 A		]};
    key <AC02>	{[	 s,	 S		]};
    key <AC03>	{[	 d,	 D		]};
    key <AC04>	{[	 f,	 F		]};
    key <AC05>	{[	 g,	 G		]};
    key <AC06>	{[	 h,	 H		]};
    key <AC07>	{[	 j,	 J		]};
    key <AC08>	{[	 k,	 K		]};
    key <AC09>	{[	 l,	 L		]};
    key <AC10>	{[ semicolon,	 colon		]};
    key <AC11>	{[ apostrophe,	 quotedbl	]};
    key <BKSL>	{[ backslash,	 bar		]};

    key <AB01>	{[	 z,	 Z		]};
    key <AB02>	{[	 x,	 X		]};
    key <AB03>	{[	 c,	 C		]};
    key <AB04>	{[	 v,	 V		]};
    key <AB05>	{[	 b,	 B		]};
    key <AB06>	{[	 n,	 N		]};
    key <AB07>	{[	 m,	 M		]};
    key <AB08>	{[   comma,	 less		]};
    key <AB09>	{[  period,	 greater	]};
    key <AB10>	{[   slash,	 question	]};
};

partial alphanumeric_keys
xkb_symbols "intl" {

    name[Group1]= "English (US, intl., with dead keys)";

    key <TLDE> { [dead_grave, dead_tilde,         grave,       asciitilde ] };
    key <AE01> { [	   1,     exclam,    exclamdown,      onesuperior ] };
    key <AE02> { [	   2,         at,   twosuperior, dead_doubleacute ] };
    key <AE03> { [	   3, numbersign, threesuperior,      dead_macron ] };
    key <AE04> { [	   4,     dollar,      currency,         sterling ] };
    key <AE05> { [	   5,    percent,      EuroSign,     dead_cedilla ] };
    key <AE06> { [    6, dead_circumflex,    onequarter,      asciicircum ] };
    key <AE07> { [	   7,  ampersand,       onehalf,	dead_horn ] };
    key <AE08> { [	   8,   asterisk, threequarters,      dead_ogonek ] };
    key <AE09> { [	   9,  parenleft, leftsinglequotemark, dead_breve ] };
    key <AE10> { [	   0, parenright, rightsinglequotemark, dead_abovering ] };
    key <AE11> { [     minus, underscore,           yen,    dead_belowdot ] };
    key <AE12> { [     equal,       plus,      multiply,         division ] };

    key <AD01> { [	   q,          Q,    adiaeresis,       Adiaeresis ] };
    key <AD02> { [	   w,          W,         aring,            Aring ] };
    key <AD03> { [	   e,          E,        eacute,           Eacute ] };
    key <AD04> { [	   r,          R,    registered,        trademark ] };
    key <AD05> { [	   t,          T,         thorn,            THORN ] };
    key <AD06> { [	   y,          Y,    udiaeresis,       Udiaeresis ] };
    key <AD07> { [	   u,          U,        uacute,           Uacute ] };
    key <AD08> { [	   i,          I,        iacute,           Iacute ] };
    key <AD09> { [	   o,          O,        oacute,           Oacute ] };
    key <AD10> { [	   p,          P,    odiaeresis,       Odiaeresis ] };
    key <AD11> { [ bracketleft,  braceleft,  guillemotleft, leftdoublequotemark ] };
    key <AD12> { [bracketright, braceright, guillemotright, rightdoublequotemark ] };

    key <AC01> { [	   a,          A,        aacute,           Aacute ] };
    key <AC02> { [	   s,          S,        ssharp,          section ] };
    key <AC03> { [	   d,          D,           eth,              ETH ] };
    key <AC04> { [	   f,          F,    ediaeresis,       Ediaeresis ] };
    key <AC05> { [	   g,          G,             g,                G ] };
    key <AC06> { [	   h,          H,             h,                H ] };
    key <AC07> { [	   j,          J,    idiaeresis,       Idiaeresis ] };
    key <AC08> { [	   k,          K,            oe,               OE ] };
    key <AC09> { [	   l,          L,        oslash,           Oslash ] };
    key <AC10> { [ semicolon,      colon,     paragraph,           degree ] };
    key <AC11> { [dead_acute, dead_diaeresis, apostrophe,        quotedbl ] };

    key <AB01> { [	   z,          Z,            ae,               AE ] };
    key <AB02> { [	   x,          X, periodcentered,     dead_stroke ] };
    key <AB03> { [	   c,          C,     copyright,             cent ] };
    key <AB04> { [	   v,          V,             v,                V ] };
    key <AB05> { [	   b,          B,             b,                B ] };
    key <AB06> { [	   n,          N,        ntilde,           Ntilde ] };
    key <AB07> { [	   m,          M,            mu,        plusminus ] };
    key <AB08> { [     comma,       less,      ccedilla,         Ccedilla ] };
    key <AB09> { [    period,    greater, dead_abovedot,       dead_caron ] };
    key <AB10> { [     slash,   question,  questiondown,        dead_hook ] };
    key <BKSL> { [ backslash,        bar,       notsign,        brokenbar ] };

    key <LSGT> { [ backslash,   bar,            backslash,      bar ] };

    include "level3(ralt_switch)"
};


   key <TLDE> { [     grave, asciitilde,    dead_grave, dead_tilde ] };
   key <AE01> { [         1,     exclam,    exclamdown, exclamdown ] };
   key <AE02> { [         2,         at,       notsign,    notsign ] };
   key <AE03> { [         3, numbersign,     0x1000300,  0x1000300 ] }; // combining grave
   key <AE04> { [         4,     dollar,     0x1000301,  0x1000301 ] }; // combining acute
   key <AE05> { [         5,    percent,     0x1000306,  0x1000306 ] }; // combining breve above
   key <AE06> { [         6,asciicircum,     0x100030A,  0x100030A ] }; // combining ring above
   key <AE07> { [         7,  ampersand,     0x1000302,  0x1000302 ] }; // combining circumflex above
   key <AE08> { [         8,   asterisk,     0x100030C,  0x100030C ] }; // combining caron above
   key <AE09> { [         9,  parenleft,     0x1000307,  0x1000307 ] }; // combining dot above
   key <AE10> { [         0, parenright,     0x1000308,  0x1000308 ] }; // combining diaeresis above
   key <AE11> { [     minus, underscore,     0x1000304,  0x1000304 ] }; // combining macron above
   key <AE12> { [     equal,       plus,     0x1000303,  0x1000303 ] }; // combining tilde above

   key <AD01> { [         q,          Q,  Greek_omega, Greek_OMEGA ] };
   key <AD02> { [         w,          W,       oslash,      Oslash ] };
   key <AD03> { [         e,          E,           oe,          OE ] };
   key <AD04> { [         r,          R,    0x1000327,   0x1000327 ] }; // combining cedilla
   key <AD05> { [         t,          T,    0x100032E,   0x100032E ] }; // combining breve below
   key <AD06> { [         y,          Y,    0x1000325,   0x1000325 ] }; // combining ring below
   key <AD07> { [         u,          U,    0x100032D,   0x100032D ] }; // combining circumflex below
   key <AD08> { [         i,          I,    0x100032C,   0x100032C ] }; // combining caron below
   key <AD09> { [         o,          O,    0x1000323,   0x1000323 ] }; // combining dot below
   key <AD10> { [         p,          P,    0x1000324,   0x1000324 ] }; // combining diaeresis below
   key <AD11> { [ bracketleft,  braceleft,  0x1000331,   0x1000331 ] }; // combining macron below
   key <AD12> { [bracketright, braceright,  0x1000330,   0x1000330 ] }; // combining tilde below

   key <AC01>  { [         a,          A,          ae,               AE ] };
   key <AC02>  { [         s,          S,      ssharp,        0x1001E9E ] }; // uppercase S sharp
   key <AC03>  { [         d,          D,         eth,              ETH ] };
   key <AC04>  { [         f,          F,       thorn,            THORN ] };
   key <AC06>  { [         h,          H,    sterling,         sterling ] };
   key <AC07>  { [         j,          J,    EuroSign,         EuroSign ] };
   key <AC10>  { [ semicolon,      colon,   masculine,      ordfeminine ] };
   key <AC11>  { [ apostrophe,  quotedbl,    currency,         currency ] };
   key <AC12>  { [ backslash,        bar,      section,         section ] };

   key <AB03>  { [         c,          C,    ccedilla,         Ccedilla ] };
   key <AB06>  { [         n,          N,      ntilde,           Ntilde ] };
   key <AB07>  { [         m,          M,          mu,               mu ] };
   key <AB08>  { [     comma,     less,  guillemotleft,   guillemotleft ] };
   key <AB09>  { [    period,  greater, guillemotright,  guillemotright ] };
   key <AB10>  { [     slash,   question, questiondown,    questiondown ] };

   key <I219>  { [  multiply,   division, ISO_Next_Group, ISO_Prev_Group ] };

   include "level3(ralt_switch)"
};

partial alphanumeric_keys modifier_keys
xkb_symbols "chr" {

    name[Group1]= "Cherokee";
    key.type[group1]="ALPHABETIC";

    key <TLDE> { [      grave,      U13CA ] };
    key <AE01> { [          1,      U13B1 ] };
    key <AE02> { [          2,      U13C7 ] };
    key <AE03> { [          3,      U13E7 ] };
    key <AE04> { [      U13D9,      U13B0 ] };
    key <AE05> { [      U13E6,      U13B9 ] };
    key <AE06> { [      U13DC,      U13DD ] };
    key <AE07> { [      U13CB,      U13E1 ] };
    key <AE08> { [      U13D6,      U13BA ] };
    key <AE09> { [      U13D2,  parenleft ] };
    key <AE10> { [      U13C4, parenright ] };
    key <AE11> { [      U13BF,      U13BC ] };
    key <AE12> { [      U13F3,      U13BD ] };

    key <AD01> { [      U13AA,      U13C6 ] };
    key <AD02> { [      U13B3,      U13EB ] };
    key <AD03> { [      U13A1,      U13E3 ] };
    key <AD04> { [      U13DB,      U13CF ] };
    key <AD05> { [      U13D4,      U13D8 ] };
    key <AD06> { [      U13EF,      U13F2 ] };
    key <AD07> { [      U13A4,      U13AD ] };
    key <AD08> { [      U13A2,      U13F1 ] };
    key <AD09> { [      U13A3,      U13EC ] };
    key <AD10> { [      U13C1,      U13EA ] };
    key <AD11> { [      U13D5,      U13D1 ] };
    key <AD12> { [      U13B6,      U13E4 ] };
    key <BKSL> { [      U13E9,      U13EE ] };

    key <AC01> { [      U13A0,      U13CC ] };
    key <AC02> { [      U13CD,      U13CE ] };
    key <AC03> { [      U13D7,      U13D0 ] };
    key <AC04> { [      U13A9,      U13C8 ] };
    key <AC05> { [      U13A6,      U13E5 ] };
    key <AC06> { [      U13AF,      U13B2 ] };
    key <AC07> { [      U13DA,      U13AB ] };
    key <AC08> { [      U13B8,      U13A7 ] };
    key <AC09> { [      U13B5,      U13AE ] };
    key <AC10> { [      U13E8,      U13E0 ] };
    key <AC11> { [ apostrophe,   quotedbl ] };

    key <AB01> { [      U13AC,      U13C3 ] };
    key <AB02> { [      U13F4,      U13ED ] };
    key <AB03> { [      U13D3,      U13DF ] };
    key <AB04> { [      U13A5,      U13DE ] };
    key <AB05> { [      U13A8,      U13F0 ] };
    key <AB06> { [      U13BE,      U13BB ] };
    key <AB07> { [      U13C5,      U13B7 ] };
    key <AB08> { [      comma,      U13E2 ] };
    key <AB09> { [     period,      U13B4 ] };
    key <AB10> { [      U13C2,      U13C9 ] };
};

// Serbian charecters added as third level symbols to US keyboard layout.

partial alphanumeric_keys
xkb_symbols "hbs" {

  include "us"
  name[Group1]= "Serbo-Croatian (US)";

  key <TLDE> { [ grave, asciitilde ] };
  key <AE06> { [ 6, dead_caron, asciicircum, asciicircum ] };
  key <AE08> { [ 8, asterisk, multiply, division ] };
  key <AE11> { [ minus, underscore, endash, emdash ] };
  key <AC09> { [ l, L, U01C9, U01C8 ] }; // ǉ ǈ
  key <AB06> { [ n, N, U01CC, U01CB ] }; // ǌ ǋ
  key <AB01> { [ z, Z, U01C6, U01C5 ] }; // ǆ ǅ
  key <AD03> { [ e, E, EuroSign, cent ] };
  key <AC03> { [ d, D, dstroke, Dstroke ] };
  key <AC11> { [ dead_acute, quotedbl, apostrophe, apostrophe ] };
  key <SPCE> { [ space, space, nobreakspace, nobreakspace ] };
  key <AB08> { [ comma, less, U3003, guillemotright ] };
  key <AB09> { [ period, greater, ellipsis, guillemotleft ] };

  include "level3(ralt_switch)"
};

// US Symbolic
// Author: Daniele Baisero <daniele.baisero@gmail.com>
// Based on the default keyboard map from 'symbols/us', edited for scientific literature.
// Added simple Greek letters to alphas, and common symbols everywhere else.
// TLDE and BKSL are AltGr-inverse, to facilitate placement of ESC over TLDE on 60% keyboards.
// LGST (Iso Key) contains rarely used floor and ceiling brackets.
partial alphanumeric_keys modifier_keys
xkb_symbols "symbolic" {

 name[Group1]= "English (US, Symbolic)";

 key <TLDE> { [ grave, asciitilde,  backslash,     bar            ] }; // ` ~ \ |
 key <AE01> { [ 1,     exclam,      onesuperior,   notsign        ] }; // 1 ! ¹ ¬
 key <AE02> { [ 2,     at,          twosuperior,   therefore      ] }; // 2 @ ² ∴
 key <AE03> { [ 3,     numbersign,  threesuperior, sterling       ] }; // 3 # ³ £
 key <AE04> { [ 4,     dollar,      foursuperior,  EuroSign       ] }; // 4 $ ⁴ €
 key <AE05> { [ 5,     percent,     fivesuperior,  permille       ] }; // 5 % ⁵ ‰
 key <AE06> { [ 6,     asciicircum, sixsuperior,   squareroot     ] }; // 6 ^ ⁶ √
 key <AE07> { [ 7,     ampersand,   sevensuperior, section        ] }; // 7 & ⁷ §
 key <AE08> { [ 8,     asterisk,    eightsuperior, infinity       ] }; // 8 * ⁸ ∞
 key <AE09> { [ 9,     parenleft,   ninesuperior,  periodcentered ] }; // 9 ( ⁹ ·
 key <AE10> { [ 0,     parenright,  zerosuperior,  degree         ] }; // 0 ) ⁰ °
 key <AE11> { [ minus, underscore,  notequal,      plusminus      ] }; // - _ ≠ ±
 key <AE12> { [ equal, plus,        multiply,      division       ] }; // = + × ÷

 key <AD01> { [ q,            Q,          U2200,         U2203         ] }; // q Q ∀ ∃
 key <AD02> { [ w,            W,          elementof,     notelementof  ] }; // w W ∈ ∉
 key <AD03> { [ e,            E,          Greek_epsilon, Greek_EPSILON ] }; // e E ε Ε
 key <AD04> { [ r,            R,          Greek_rho,     Greek_RHO     ] }; // p P ρ Ρ
 key <AD05> { [ t,            T,          Greek_tau,     Greek_TAU     ] }; // t T τ Τ
 key <AD06> { [ y,            Y,          Greek_upsilon, Greek_UPSILON ] }; // y Y υ Υ
 key <AD07> { [ u,            U,          Greek_theta,   Greek_THETA   ] }; // u U θ Θ
 key <AD08> { [ i,            I,          Greek_iota,    Greek_IOTA    ] }; // i I ι Ι
 key <AD09> { [ o,            O,          Greek_omicron, Greek_OMICRON ] }; // o O ο Ο
 key <AD10> { [ p,            P,          Greek_pi,      Greek_PI      ] }; // p P π Π
 key <AD11> { [ bracketleft,  braceleft,  union,         intersection  ] }; // [ { ∪ ∩
 key <AD12> { [ bracketright, braceright, includedin,    includes      ] }; // ] } ⊂ ⊃

 key <AC01> { [ a,          A,        Greek_alpha, Greek_ALPHA ] }; // a A α Α
 key <AC02> { [ s,          S,        Greek_sigma, Greek_SIGMA ] }; // s S σ Σ
 key <AC03> { [ d,          D,        Greek_delta, Greek_DELTA ] }; // d D δ Δ
 key <AC04> { [ f,          F,        Greek_phi,   Greek_PHI   ] }; // f F φ Φ
 key <AC05> { [ g,          G,        Greek_gamma, Greek_GAMMA ] }; // g G γ Γ
 key <AC06> { [ h,          H,        Greek_eta,   Greek_ETA   ] }; // h H η Η
 key <AC07> { [ j,          J,        Greek_xi,    Greek_XI    ] }; // j J ξ Ξ
 key <AC08> { [ k,          K,        Greek_kappa, Greek_KAPPA ] }; // k K κ Κ
 key <AC09> { [ l,          L,        Greek_lamda, Greek_LAMDA ] }; // l L λ Λ
 key <AC10> { [ semicolon,  colon,    downarrow,   uparrow     ] }; // ; : ↓ ↑
 key <AC11> { [ apostrophe, quotedbl, rightarrow,  leftarrow   ] }; // ' " → ←

 key <AB01> { [ z,      Z,        Greek_zeta,       Greek_ZETA     ] }; // z Z ζ Ζ
 key <AB02> { [ x,      X,        Greek_chi,        Greek_CHI      ] }; // x X χ Χ
 key <AB03> { [ c,      C,        Greek_psi,        Greek_PSI      ] }; // c C ψ Ψ
 key <AB04> { [ v,      V,        Greek_omega,      Greek_OMEGA    ] }; // v V ω Ω
 key <AB05> { [ b,      B,        Greek_beta,       Greek_BETA     ] }; // b B β Β
 key <AB06> { [ n,      N,        Greek_nu,         Greek_NU       ] }; // n N ν Ν
 key <AB07> { [ m,      M,        Greek_mu,         Greek_MU       ] }; // m M μ Μ
 key <AB08> { [ comma,  less,     lessthanequal,    guillemotleft  ] }; // , < ≤ «
 key <AB09> { [ period, greater,  greaterthanequal, guillemotright ] }; // . > ≥ »
 key <AB10> { [ slash,  question, U203D,            U2766          ] }; // / ? ‽ ❦

 key <BKSL> { [ backslash, bar,   grave, asciitilde ] }; // \ | ` ~
 key <LSGT> { [ U230A,     U230B, U2308, U2309      ] }; // ⌊ ⌋ ⌈ ⌉

 include "level3(ralt_switch)"
};