
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace airline_FA_ind_fit_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 22> locations_array__ = 
{" (found before start of program)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 8, column 3 to column 22)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 9, column 3 to column 14)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 13, column 3 to column 24)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 15, column 7 to column 57)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 14, column 18 to line 16, column 5)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 14, column 3 to line 16, column 5)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 26, column 4 to column 28)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 28, column 7 to column 37)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 27, column 19 to line 29, column 5)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 27, column 4 to line 29, column 5)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 20, column 3 to column 29)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 21, column 3 to column 35)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 22, column 3 to column 31)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 2, column 4 to column 19)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 3, column 10 to column 11)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 3, column 4 to column 39)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 4, column 10 to column 11)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 4, column 4 to column 36)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 8, column 9 to column 10)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 13, column 9 to column 10)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/Lab_5_Using_link_functions_to_create_GLM/airline_FA_ind_fit.stan', line 26, column 10 to column 11)"};




class airline_FA_ind_fit_model final : public model_base_crtp<airline_FA_ind_fit_model> {

 private:
  int N;
  std::vector<double> Miles_flown;
  std::vector<int> accidents; 
  
 
 public:
  ~airline_FA_ind_fit_model() { }
  
  inline std::string model_name() const final { return "airline_FA_ind_fit_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  airline_FA_ind_fit_model(stan::io::var_context& context__,
                           unsigned int random_seed__ = 0,
                           std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "airline_FA_ind_fit_model_namespace::airline_FA_ind_fit_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 14;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 14;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 14;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 15;
      stan::math::validate_non_negative_index("Miles_flown", "N", N);
      current_statement__ = 16;
      context__.validate_dims("data initialization","Miles_flown","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      Miles_flown = 
        std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 16;
      Miles_flown = context__.vals_r("Miles_flown");
      current_statement__ = 16;
      stan::math::check_greater_or_equal(function__, "Miles_flown",
                                            Miles_flown, 0);
      current_statement__ = 17;
      stan::math::validate_non_negative_index("accidents", "N", N);
      current_statement__ = 18;
      context__.validate_dims("data initialization","accidents","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      accidents = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 18;
      accidents = context__.vals_i("accidents");
      current_statement__ = 18;
      stan::math::check_greater_or_equal(function__, "accidents", accidents,
                                            0);
      current_statement__ = 19;
      stan::math::validate_non_negative_index("alfa", "N", N);
      current_statement__ = 20;
      stan::math::validate_non_negative_index("lambda", "N", N);
      current_statement__ = 21;
      stan::math::validate_non_negative_index("y", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = N + 1;
    
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
    static constexpr const char* function__ = "airline_FA_ind_fit_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      std::vector<local_scalar_t__> alfa =
         std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      current_statement__ = 1;
      alfa = in__.template read<std::vector<local_scalar_t__>>(N);
      local_scalar_t__ theta = DUMMY_VAR__;
      current_statement__ = 2;
      theta = in__.template read<local_scalar_t__>();
      std::vector<local_scalar_t__> lambda =
         std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      current_statement__ = 6;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 4;
        stan::model::assign(lambda,
          stan::math::exp(
            (stan::model::rvalue(alfa, "alfa", stan::model::index_uni(i)) +
              (theta *
                stan::model::rvalue(Miles_flown, "Miles_flown",
                  stan::model::index_uni(i))))),
          "assigning variable lambda", stan::model::index_uni(i));
      }
      {
        current_statement__ = 11;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(alfa, 2.5, 0.001));
        current_statement__ = 12;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(theta, 0.0001, 0.00005));
        current_statement__ = 13;
        lp_accum__.add(stan::math::poisson_lpmf<propto__>(accidents, lambda));
      }
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
    static constexpr const char* function__ = "airline_FA_ind_fit_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      std::vector<double> alfa =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      alfa = in__.template read<std::vector<local_scalar_t__>>(N);
      double theta = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      theta = in__.template read<local_scalar_t__>();
      std::vector<double> lambda =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      out__.write(alfa);
      out__.write(theta);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 6;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 4;
        stan::model::assign(lambda,
          stan::math::exp(
            (stan::model::rvalue(alfa, "alfa", stan::model::index_uni(i)) +
              (theta *
                stan::model::rvalue(Miles_flown, "Miles_flown",
                  stan::model::index_uni(i))))),
          "assigning variable lambda", stan::model::index_uni(i));
      }
      if (emit_transformed_parameters__) {
        out__.write(lambda);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<int> y =
         std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 10;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 8;
        stan::model::assign(y,
          stan::math::poisson_rng(
            stan::model::rvalue(lambda, "lambda", stan::model::index_uni(i)),
            base_rng__), "assigning variable y", stan::model::index_uni(i));
      }
      current_statement__ = 7;
      stan::math::check_greater_or_equal(function__, "y", y, 0);
      out__.write(y);
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
      std::vector<local_scalar_t__> alfa =
         std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        alfa[(sym1__ - 1)] = in__.read<local_scalar_t__>();
      }
      out__.write(alfa);
      local_scalar_t__ theta = DUMMY_VAR__;
      theta = in__.read<local_scalar_t__>();
      out__.write(theta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"alfa", "theta", "lambda", "y"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{
                                                                   static_cast<size_t>(N)
                                                                   },
      std::vector<size_t>{}, std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "alfa" + '.' + std::to_string(sym1__));
      } 
    }
    param_names__.emplace_back(std::string() + "theta");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "lambda" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "alfa" + '.' + std::to_string(sym1__));
      } 
    }
    param_names__.emplace_back(std::string() + "theta");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "lambda" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alfa\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"theta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lambda\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"y\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"int\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alfa\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"theta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lambda\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"y\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"int\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (N + 1);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = N;
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
      const size_t num_params__ = 
  (N + 1);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = N;
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
     constexpr std::array<const char*, 2> names__{"alfa", "theta"};
      const std::array<Eigen::Index, 2> constrain_param_sizes__{N, 1};
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
    
};
}

using stan_model = airline_FA_ind_fit_model_namespace::airline_FA_ind_fit_model;

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
  return airline_FA_ind_fit_model_namespace::profiles__;
}

#endif


