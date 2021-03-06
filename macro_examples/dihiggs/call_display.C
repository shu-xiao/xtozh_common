#include <string>
#include <vector>
#include "displayMultipleHistos.C"
#include <TFile.h>

using namespace std;

void call_display()
{
  std::string dirname="$PWD/";
  vector<string> filenames;
  vector<string> legnames;
  ////////////////////////////////  
  filenames.clear(); 
  filenames.push_back(dirname+"Radionhh4b_M2000.root");
  filenames.push_back(dirname+"2HDMhh4b_M2000.root");
  filenames.push_back(dirname+"Bulkhh4b_M2000.root");
  filenames.push_back(dirname+"RShh4b_M2000.root");
  filenames.push_back(dirname+"RShh4b_M2000_gluon.root");
  filenames.push_back(dirname+"RShh4b_M2000_DY.root");

  legnames.clear();
  legnames.push_back("Spin-0 Radion (100% GF)");
  legnames.push_back("Spin-0 H (100% DY)");
  legnames.push_back("Spin-2 Bulk Graviton (100% GF)");
  legnames.push_back("Spin-2 RS Graviton");  
  legnames.push_back("Spin-2 RS Graviton (100% GF)");
  legnames.push_back("Spin-2 RS Graviton (100% DY)");

  displayMultipleHistos(filenames,legnames,"h_Xpz","X#rightarrow hh, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_Xy","X#rightarrow hh, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_cosThetaStar","X#rightarrow hh, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_cosPhi","X#rightarrow hh, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_Bpt0","X#rightarrow hh, M_{X}=2000 GeV","p_{T}(H) [GeV]",0,1500);
  displayMultipleHistos(filenames,legnames,"h_By0","X#rightarrow hh, M_{X}=2000 GeV","Rapidity of Higgs");
  displayMultipleHistos(filenames,legnames,"h_D_dR0","X#rightarrow hh, M_{X}=2000 GeV","#Delta R(b,b)",0,1);
  displayMultipleHistos(filenames,legnames,"h_cosTheta0","X#rightarrow hh, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_B_dEta","X#rightarrow hh, M_{X}=2000 GeV","test",-9999, -9999,true,0,1.2,
 			0.281452,
			0.622447,
			0.430645,
			0.883966);
  displayMultipleHistos(filenames,legnames,"h_D_dEta0","X#rightarrow hh, M_{X}=2000 GeV","test",0,3,true,0,1.2,
			0.281452,
			0.622447,
			0.430645,
			0.883966);



  ////////////////////////////////  
  filenames.clear();
  filenames.push_back(dirname+"Radionhh4b_M4500.root");
  filenames.push_back(dirname+"2HDMhh4b_M4500.root");
  filenames.push_back(dirname+"Bulkhh4b_M4500.root");
  filenames.push_back(dirname+"RShh4b_M4500.root");
  filenames.push_back(dirname+"RShh4b_M4500_gluon.root");
  filenames.push_back(dirname+"RShh4b_M4500_DY.root");
  
  displayMultipleHistos(filenames,legnames,"h_Xpz","X#rightarrow hh, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_Xy","X#rightarrow hh, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_cosThetaStar","X#rightarrow hh, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_cosPhi","X#rightarrow hh, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_Bpt0","X#rightarrow hh, M_{X}=4500 GeV","p_{T}(H) [GeV]");
  displayMultipleHistos(filenames,legnames,"h_By0","X#rightarrow hh, M_{X}=4500 GeV","Rapidity of Higgs");
  displayMultipleHistos(filenames,legnames,"h_D_dR0","X#rightarrow hh, M_{X}=4500 GeV","#Delta R(b,b)",0,0.5);
  displayMultipleHistos(filenames,legnames,"h_cosTheta0","X#rightarrow hh, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_B_dEta","X#rightarrow hh, M_{X}=4500 GeV","test",-9999,-9999,true,0,1.3,
 			0.281452,
			0.622447,
			0.430645,
			0.883966);
  displayMultipleHistos(filenames,legnames,"h_D_dEta0","X#rightarrow hh, M_{X}=4500 GeV","test",0,3,true,0,1.3,
 			0.281452,
			0.622447,
			0.430645,
			0.883966);




  ////////////////////////////////  
  filenames.clear();
  filenames.push_back(dirname+"Radionhh4b_M2000_etacut.root");
  filenames.push_back(dirname+"2HDMhh4b_M2000_etacut.root");
  filenames.push_back(dirname+"Bulkhh4b_M2000_etacut.root");
  filenames.push_back(dirname+"RShh4b_M2000_etacut.root");
  filenames.push_back(dirname+"RShh4b_M2000_gluon_etacut.root");
  filenames.push_back(dirname+"RShh4b_M2000_DY_etacut.root");
  
  displayMultipleHistos(filenames,legnames,"h_Xpz","X#rightarrow hh, M_{X}=2000 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");
  displayMultipleHistos(filenames,legnames,"h_Xy","X#rightarrow hh, M_{X}=2000 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");
  displayMultipleHistos(filenames,legnames,"h_cosThetaStar","X#rightarrow hh, M_{X}=2000 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");
  displayMultipleHistos(filenames,legnames,"h_cosPhi","X#rightarrow hh, M_{X}=2000 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");
  displayMultipleHistos(filenames,legnames,"h_Bpt0","X#rightarrow hh, M_{X}=2000 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3","p_{T}(H) [GeV]",0,1500);
  displayMultipleHistos(filenames,legnames,"h_By0","X#rightarrow hh, M_{X}=2000 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3","Rapidity of Higgs");
  displayMultipleHistos(filenames,legnames,"h_D_dR0","X#rightarrow hh, M_{X}=2000 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3","#DeltaR(b,b)",0,1);
  displayMultipleHistos(filenames,legnames,"h_cosTheta0","X#rightarrow hh, M_{X}=2000 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");


  ////////////////////////////////  
  filenames.clear();
  filenames.push_back(dirname+"Radionhh4b_M4500_etacut.root");
  filenames.push_back(dirname+"2HDMhh4b_M4500_etacut.root");
  filenames.push_back(dirname+"Bulkhh4b_M4500_etacut.root");
  filenames.push_back(dirname+"RShh4b_M4500_etacut.root"); 
  filenames.push_back(dirname+"RShh4b_M4500_gluon_etacut.root");
  filenames.push_back(dirname+"RShh4b_M4500_DY_etacut.root");
 
  displayMultipleHistos(filenames,legnames,"h_Xpz","X#rightarrow hh, M_{X}=4500 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");
  displayMultipleHistos(filenames,legnames,"h_Xy","X#rightarrow hh, M_{X}=4500 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");
  displayMultipleHistos(filenames,legnames,"h_cosThetaStar","X#rightarrow hh, M_{X}=4500 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");
  displayMultipleHistos(filenames,legnames,"h_cosPhi","X#rightarrow hh, M_{X}=4500 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");
  displayMultipleHistos(filenames,legnames,"h_Bpt0","X#rightarrow hh, M_{X}=4500 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3","p_{T}(H) [GeV]");
  displayMultipleHistos(filenames,legnames,"h_By0","X#rightarrow hh, M_{X}=4500 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3","Rapidity of Higgs");
  displayMultipleHistos(filenames,legnames,"h_D_dR0","X#rightarrow hh, M_{X}=4500 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3","#DeltaR(b,b)",0,0.5);
  displayMultipleHistos(filenames,legnames,"h_cosTheta0","X#rightarrow hh, M_{X}=4500 GeV, |#eta_{h}|<2.5, |#Delta#eta(h,h)| < 1.3");


  ////////////////////////////////   WW
  filenames.clear();
  filenames.push_back(dirname+"RadionWW_M2000.root");
  filenames.push_back(dirname+"2HDMWW_M2000.root");
  filenames.push_back(dirname+"ZprimeWW_M2000.root");
  filenames.push_back(dirname+"BulkWW_M2000.root");
  filenames.push_back(dirname+"RSWW_M2000.root");
  filenames.push_back(dirname+"RSWW_M2000_gluon.root");
  filenames.push_back(dirname+"RSWW_M2000_DY.root");
  
  legnames.clear();
  legnames.push_back("Spin-0 Radion (100% GF)");
  legnames.push_back("Spin-0 H (100% DY)");
  legnames.push_back("Spin-1 Zprime (100% DY)");
  legnames.push_back("Spin-2 Bulk Graviton (100% GF)");
  legnames.push_back("Spin-2 RS Graviton");
  legnames.push_back("Spin-2 RS Graviton (100% GF)");
  legnames.push_back("Spin-2 RS Graviton (100% DY)");


  displayMultipleHistos(filenames,legnames,"h_Xpz","X#rightarrow WW, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_Xy","X#rightarrow WW, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_cosThetaStar","X#rightarrow WW, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_cosPhi","X#rightarrow WW, M_{X}=2000 GeV");
  displayMultipleHistos(filenames,legnames,"h_Bpt0","X#rightarrow WW, M_{X}=2000 GeV","p_{T}(W) [GeV]",0,1500);
  displayMultipleHistos(filenames,legnames,"h_By0","X#rightarrow WW, M_{X}=2000 GeV","Rapidity of W");
  displayMultipleHistos(filenames,legnames,"h_D_dR0","X#rightarrow WW, M_{X}=2000 GeV","#Delta R(q,q)",0,1);
  displayMultipleHistos(filenames,legnames,"h_cosTheta0","X#rightarrow WW, M_{X}=2000 GeV");


  ////////////////////////////////  
  filenames.clear();
  filenames.push_back(dirname+"RadionWW_M4500.root");
  filenames.push_back(dirname+"2HDMWW_M4500.root");
  filenames.push_back(dirname+"ZprimeWW_M4500.root");
  filenames.push_back(dirname+"BulkWW_M4500.root");
  filenames.push_back(dirname+"RSWW_M4500.root");
  filenames.push_back(dirname+"RSWW_M4500_gluon.root");
  filenames.push_back(dirname+"RSWW_M4500_DY.root");

  
  displayMultipleHistos(filenames,legnames,"h_Xpz","X#rightarrow WW, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_Xy","X#rightarrow WW, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_cosThetaStar","X#rightarrow WW, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_cosPhi","X#rightarrow WW, M_{X}=4500 GeV");
  displayMultipleHistos(filenames,legnames,"h_Bpt0","X#rightarrow WW, M_{X}=4500 GeV","p_{T}(W) [GeV]");
  displayMultipleHistos(filenames,legnames,"h_By0","X#rightarrow WW, M_{X}=4500 GeV","Rapidity of W");
  displayMultipleHistos(filenames,legnames,"h_D_dR0","X#rightarrow WW, M_{X}=4500 GeV","#Delta R(q,q)",0,0.5);
  displayMultipleHistos(filenames,legnames,"h_cosTheta0","X#rightarrow WW, M_{X}=4500 GeV");









}
