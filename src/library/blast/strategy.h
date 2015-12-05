/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "library/blast/action_result.h"
#include "library/blast/options.h"
#include "library/blast/blast.h"
#include "util/flet.h"

namespace lean {
namespace blast {
/** Generic strategy for synthesizing proofs using the blast framework.
    There are two main configuration options:

    1- Preprocessing (preprocess method)
    2- Next action to be performed (next_action method)
 */
class strategy_fn {
    unsigned m_init_num_choices;
    optional<expr> invoke_preprocess();
protected:
    virtual optional<expr> preprocess() = 0;
    virtual action_result next_action() = 0;

    virtual action_result hypothesis_pre_activation(hypothesis_idx hidx) = 0;
    virtual action_result hypothesis_post_activation(hypothesis_idx hidx) = 0;
    action_result activate_hypothesis(bool preprocess = false);

    action_result next_branch(expr pr);
    optional<expr> search_upto(unsigned depth);
    optional<expr> init_search();
    optional<expr> iterative_deepening();
    virtual optional<expr> search();
public:
    strategy_fn();
    optional<expr> operator()() { return search(); }
};

#define TryStrategy(S) {\
        flet<state> save_state(curr_state(), curr_state());\
        curr_state().clear_proof_steps();\
        if (optional<expr> pf = S()) { return action_result::solved(*pf); } \
    }

typedef std::function<optional<expr>()> strategy;
}}
