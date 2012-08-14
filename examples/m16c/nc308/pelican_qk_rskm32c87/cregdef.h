/***********************************************************************/
/*                                                                     */
/*  FILE        :cregdef.h                                             */
/*  DATE        :Tue, Oct 21, 2008                                     */
/*  DESCRIPTION :define the internal registers of MCU.                 */
/*  CPU GROUP   :87                                                    */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.8).     */
/*                                                                     */
/***********************************************************************/

/*********************************************************************
 *  STARTUP for M32C/9X
 *  Copyright(c) 2004 Renesas Technology Corp.
 *  And Renesas Solutions Corp.,All Rights Reserved.
 *
 *  cregdef.h : defined control register
 *
 *  note: Do not modify
 *
 * $Date: 2005/11/01 04:35:51 $
 * $Revision: 1.6 $
 *********************************************************************/

#pragma CREG    _flg_    flg
#pragma CREG    _isp_    isp
#pragma CREG    _sp_    sp
#pragma CREG    _sb_    sb
#pragma CREG    _fb_    fb
#pragma CREG    _intb_    intb
_UINT _flg_;
_UBYTE _far * _sb_;
_UBYTE _far * _fb_;
_UINT *_sp_;
_UINT *_isp_;
_UBYTE _far *_intb_;

