enum class InstructionID {
   Unknown,
   add,
   addc,
   adde,
   addi,
   addic,
   addico,
   addis,
   addme,
   addze,
   and,
   andc,
   andio,
   andiso,
   b,
   bc,
   bcctr,
   bclr,
   cmp,
   cmpi,
   cmpl,
   cmpli,
   cntlzd,
   cntlzw,
   crand,
   crandc,
   creqv,
   crnand,
   crnor,
   cror,
   crorc,
   crxor,
   dcbf,
   dcbst,
   dcbt,
   dcbtst,
   dcbz,
   divd,
   divdu,
   divw,
   divwu,
   eciwx,
   ecowx,
   eieio,
   eqv,
   extsb,
   extsh,
   extsw,
   fabs,
   fadd,
   fadds,
   fcfid,
   fcmpo,
   fcmpu,
   fctid,
   fctidz,
   fctiw,
   fctiwz,
   fdiv,
   fdivs,
   fmadd,
   fmadds,
   fmr,
   fmsub,
   fmsubs,
   fmul,
   fmuls,
   fnabs,
   fneg,
   fnmadd,
   fnmadds,
   fnmsub,
   fnmsubs,
   fres,
   frsp,
   frsqrte,
   fsel,
   fsqrt,
   fsqrts,
   fsub,
   fsubs,
   icbi,
   isync,
   krncall,
   lbz,
   lbzu,
   lbzux,
   lbzx,
   ld,
   ldarx,
   ldu,
   ldux,
   ldx,
   lfd,
   lfdu,
   lfdux,
   lfdx,
   lfs,
   lfsu,
   lfsux,
   lfsx,
   lha,
   lhau,
   lhaux,
   lhax,
   lhbrx,
   lhz,
   lhzu,
   lhzux,
   lhzx,
   lmw,
   lswi,
   lswx,
   lwa,
   lwarx,
   lwaux,
   lwax,
   lwbrx,
   lwz,
   lwzu,
   lwzux,
   lwzx,
   mcrf,
   mcrfs,
   mfcr,
   mffs,
   mfmsr,
   mfocrf,
   mfspr,
   mfsr,
   mfsrin,
   mftb,
   mtcrf,
   mtfsb0,
   mtfsb1,
   mtfsf,
   mtfsfi,
   mtmsr,
   mtmsrd,
   mtocrf,
   mtspr,
   mtsr,
   mtsrin,
   mulhd,
   mulhdu,
   mulhw,
   mulhwu,
   mulld,
   mulli,
   mullw,
   nand,
   neg,
   nor,
   or,
   orc,
   ori,
   oris,
   rfid,
   rldcl,
   rldcr,
   rldic,
   rldicl,
   rldicr,
   rldimi,
   rlwimi,
   rlwinm,
   rlwnm,
   sc,
   slbia,
   slbie,
   slbmfee,
   slbmfev,
   slbmte,
   sld,
   slw,
   srad,
   sradi,
   sraw,
   srawi,
   srd,
   srw,
   stb,
   stbu,
   stbux,
   stbx,
   std,
   stdcx,
   stdu,
   stdux,
   stdx,
   stfd,
   stfdu,
   stfdux,
   stfdx,
   stfiwx,
   stfs,
   stfsu,
   stfsux,
   stfsx,
   sth,
   sthbrx,
   sthu,
   sthux,
   sthx,
   stmw,
   stswi,
   stswx,
   stw,
   stwbrx,
   stwcx,
   stwu,
   stwux,
   stwx,
   subf,
   subfc,
   subfe,
   subfic,
   subfme,
   subfze,
   sync,
   td,
   tdi,
   tlbia,
   tlbie,
   tlbiel,
   tlbsync,
   tw,
   twi,
   xor,
   xori,
   xoris,
   InstructionMax,
};
