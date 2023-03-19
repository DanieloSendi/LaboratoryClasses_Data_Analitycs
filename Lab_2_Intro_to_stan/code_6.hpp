
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace code_6_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 13> locations_array__ = 
{" (found before start of program)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 29, column 2 to column 25)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 11, column 2 to column 21)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 12, column 2 to column 19)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 18, column 2 to column 14)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 19, column 2 to column 14)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 20, column 2 to column 13)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 23, column 2 to column 59)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 25, column 2 to column 44)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 4, column 4 to column 21)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 5, column 4 to column 70)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 6, column 4 to column 18)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_2_Intro_to_stan/code_6.stan', line 3, column 67 to line 7, column 3)"};

struct tail_delta_functor__ {
  template <typename T0__, typename T1__, typename T2__,
            stan::require_col_vector_t<T0__>* = nullptr,
            stan::require_col_vector_t<T1__>* = nullptr,
            stan::require_stan_scalar_t<T2__>* = nullptr>
  Eigen::Matrix<stan::promote_args_t<stan::value_type_t<T0__>, stan::value_type_t<T1__>, T2__>, -1, 1>
  operator()(const T0__& y, const T1__& theta, const std::vector<T2__>& x_r,
             const std::vector<int>& x_i, std::ostream* pstream__) const;
};

template <typename T0__, typename T1__, typename T2__,
          stan::require_col_vector_t<T0__>* = nullptr,
          stan::require_col_vector_t<T1__>* = nullptr,
          stan::require_stan_scalar_t<T2__>* = nullptr>
  Eigen::Matrix<stan::promote_args_t<stan::value_type_t<T0__>, stan::value_type_t<T1__>, T2__>, -1, 1>
  tail_delta(const T0__& y_arg__, const T1__& theta_arg__,
             const std::vector<T2__>& x_r, const std::vector<int>& x_i,
             std::ostream* pstream__) {
    using local_scalar_t__ =
            stan::promote_args_t<stan::value_type_t<T0__>,
                                 stan::value_type_t<T1__>, T2__>;
    int current_statement__ = 0; 
    const auto& y = stan::math::to_ref(y_arg__);
    const auto& theta = stan::math::to_ref(theta_arg__);
    static constexpr bool propto__ = true;
    (void) propto__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      Eigen::Matrix<local_scalar_t__, -1, 1> deltas =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(1, DUMMY_VAR__);
      current_statement__ = 10;
      stan::model::assign(deltas,
        ((2 *
           (stan::math::normal_cdf(
              stan::model::rvalue(theta, "theta", stan::model::index_uni(1)),
              0,
              stan::math::exp(
                stan::model::rvalue(y, "y", stan::model::index_uni(1)))) -
             0.5)) - 0.99),
        "assigning variable deltas", stan::model::index_uni(1));
      current_statement__ = 11;
      return deltas;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    }
template <typename T0__, typename T1__, typename T2__,
          stan::require_col_vector_t<T0__>*,
          stan::require_col_vector_t<T1__>*,
          stan::require_stan_scalar_t<T2__>*>
Eigen::Matrix<stan::promote_args_t<stan::value_type_t<T0__>, stan::value_type_t<T1__>, T2__>, -1, 1>
tail_delta_functor__::operator()(const T0__& y, const T1__& theta,
                                 const std::vector<T2__>& x_r,
                                 const std::vector<int>& x_i,
                                 std::ostream* pstream__)  const
{
  return tail_delta(y, theta, x_r, x_i, pstream__);
}

 class code_6_model final : public model_base_crtp<code_6_model> {

 private:
  Eigen::Matrix<double, -1, 1> y_guess__;
  Eigen::Matrix<double, -1, 1> theta__;
  Eigen::Matrix<double, -1, 1> y__;
  std::vector<double> x_r;
  std::vector<int> x_i; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> y_guess{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> theta{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> y{nullptr, 0};
 
 public:
  ~code_6_model() { }
  
  inline std::string model_name() const final { return "code_6_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  code_6_model(stan::io::var_context& context__,
               unsigned int random_seed__ = 0,
               std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "code_6_model_namespace::code_6_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 2;
      context__.validate_dims("data initialization","y_guess","double",
           std::vector<size_t>{static_cast<size_t>(1)});
      y_guess__ = 
        Eigen::Matrix<double, -1, 1>::Constant(1,
          std::numeric_limits<double>::quiet_NaN());
      new (&y_guess) Eigen::Map<Eigen::Matrix<double, -1, 1>>(y_guess__.data(), 1);
        
      
      {
        std::vector<local_scalar_t__> y_guess_flat__;
        current_statement__ = 2;
        y_guess_flat__ = context__.vals_r("y_guess");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= 1; ++sym1__) {
          current_statement__ = 2;
          stan::model::assign(y_guess, y_guess_flat__[(pos__ - 1)],
            "assigning variable y_guess", stan::model::index_uni(sym1__));
          current_statement__ = 2;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 3;
      context__.validate_dims("data initialization","theta","double",
           std::vector<size_t>{static_cast<size_t>(1)});
      theta__ = 
        Eigen::Matrix<double, -1, 1>::Constant(1,
          std::numeric_limits<double>::quiet_NaN());
      new (&theta) Eigen::Map<Eigen::Matrix<double, -1, 1>>(theta__.data(), 1);
        
      
      {
        std::vector<local_scalar_t__> theta_flat__;
        current_statement__ = 3;
        theta_flat__ = context__.vals_r("theta");
        current_statement__ = 3;
        pos__ = 1;
        current_statement__ = 3;
        for (int sym1__ = 1; sym1__ <= 1; ++sym1__) {
          current_statement__ = 3;
          stan::model::assign(theta, theta_flat__[(pos__ - 1)],
            "assigning variable theta", stan::model::index_uni(sym1__));
          current_statement__ = 3;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 4;
      y__ = 
        Eigen::Matrix<double, -1, 1>::Constant(1,
          std::numeric_limits<double>::quiet_NaN());
      new (&y) Eigen::Map<Eigen::Matrix<double, -1, 1>>(y__.data(), 1);
      
      current_statement__ = 5;
      x_r = std::vector<double>(0, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 6;
      x_i = std::vector<int>(0, std::numeric_limits<int>::min());
      
      
      current_statement__ = 7;
      stan::model::assign(y,
        stan::math::algebra_solver(tail_delta_functor__(), y_guess, theta,
          x_r, x_i, pstream__), "assigning variable y");
      current_statement__ = 8;
      if (pstream__) {
        stan::math::stan_print(pstream__, "Standard deviation = ");
        stan::math::stan_print(pstream__, stan::math::exp(
                                            stan::model::rvalue(y, "y",
                                              stan::model::index_uni(1))));
        stan::math::stan_print(pstream__, "\n");
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 0U;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "code_6_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "code_6_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      sigma = stan::math::exp(
                stan::model::rvalue(y, "y", stan::model::index_uni(1)));
      out__.write(sigma);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"sigma"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "sigma");
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "sigma");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 0;
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 1;
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 0;
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 1;
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 0> names__{};
      const std::array<Eigen::Index, 0> constrain_param_sizes__{};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
     }; } using stan_model = code_6_model_namespace::code_6_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return code_6_model_namespace::profiles__;
}

#endif


