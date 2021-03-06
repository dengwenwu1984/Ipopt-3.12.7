// Copyright (C) 2008 International Business Machines and others.
// All Rights Reserved.
// This code is published under the Eclipse Public License.
//
// $Id: IpInexactRegOp.cpp 1861 2010-12-21 21:34:47Z andreasw $
//
// Authors:  Andreas Waechter            IBM    2008-09-05

#include "IpInexactRegOp.hpp"
#include "IpRegOptions.hpp"

#include "IpInexactAlgBuilder.hpp"
#include "IpInexactSearchDirCalc.hpp"
#include "IpInexactDoglegNormal.hpp"
#include "IpInexactNewtonNormal.hpp"
#include "IpInexactPDSolver.hpp"
#include "IpInexactLSAcceptor.hpp"
#include "IpInexactCq.hpp"
#include "IpIterativePardisoSolverInterface.hpp"
#include "IpInexactNormalTerminationTester.hpp"
#include "IpInexactPDTerminationTester.hpp"

namespace Ipopt
{

  void RegisterOptions_Inexact(const SmartPtr<RegisteredOptions>& roptions)
  {
    roptions->SetRegisteringCategory("Inexact Step Computation");
    InexactAlgorithmBuilder::RegisterOptions(roptions);
    InexactSearchDirCalculator::RegisterOptions(roptions);
    InexactDoglegNormalStep::RegisterOptions(roptions);
    InexactNewtonNormalStep::RegisterOptions(roptions);
    InexactPDSolver::RegisterOptions(roptions);
    InexactLSAcceptor::RegisterOptions(roptions);
    InexactCq::RegisterOptions(roptions);
    IterativePardisoSolverInterface::RegisterOptions(roptions);
    InexactNormalTerminationTester::RegisterOptions(roptions);
    InexactPDTerminationTester::RegisterOptions(roptions);
  }

} // namespace Ipopt
