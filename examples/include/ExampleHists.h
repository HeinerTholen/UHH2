#pragma once

#include "UHH2/core/include/Hists.h"

/**
 *   Example class for booking and filling histograms, the new version using AnalysisModule mechanisms.
 */

class ExampleHists: public uhh2::Hists {
public:
    // use the same constructor arguments as Hists for forwarding:
    ExampleHists(uhh2::Context & ctx, const std::string & dirname);

    virtual void fill(uhh2::Event & ev) override;
    virtual ~ExampleHists();
};