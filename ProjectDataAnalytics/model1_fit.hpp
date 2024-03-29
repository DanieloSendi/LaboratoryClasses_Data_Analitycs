
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace model1_fit_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 44> locations_array__ = 
{" (found before start of program)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 19, column 2 to column 17)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 22, column 2 to column 16)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 23, column 2 to column 19)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 24, column 2 to column 22)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 25, column 2 to column 19)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 26, column 2 to column 21)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 27, column 2 to column 27)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 54, column 2 to column 22)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 55, column 2 to column 24)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 58, column 4 to line 63, column 75)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 65, column 4 to line 70, column 81)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 57, column 17 to line 71, column 3)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 57, column 2 to line 71, column 3)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 32, column 2 to column 23)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 34, column 2 to column 19)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 35, column 2 to column 26)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 36, column 2 to column 29)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 37, column 2 to column 32)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 38, column 2 to column 29)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 39, column 2 to column 31)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 40, column 2 to column 32)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 44, column 4 to line 49, column 67)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 43, column 17 to line 50, column 3)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 43, column 2 to line 50, column 3)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 3, column 2 to column 17)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 6, column 2 to column 8)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 7, column 8 to column 9)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 7, column 2 to column 17)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 10, column 8 to column 9)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 10, column 2 to column 25)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 11, column 8 to column 9)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 11, column 2 to column 27)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 12, column 8 to column 9)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 12, column 2 to column 30)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 13, column 8 to column 9)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 13, column 2 to column 27)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 14, column 8 to column 9)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 14, column 2 to column 30)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 15, column 8 to column 9)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 15, column 2 to column 31)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 19, column 10 to column 13)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 54, column 8 to column 9)",
 " (in '/home/LaboratoryClasses_Data_Analitycs/ProjectDataAnalytics/model1_fit.stan', line 55, column 8 to column 9)"};




class model1_fit_model final : public model_base_crtp<model1_fit_model> {

 private:
  int N;
  int K;
  std::vector<int> y;
  std::vector<double> age_pred;
  std::vector<int> gender_pred;
  std::vector<int> schoolsup_pred;
  std::vector<int> famsup_pred;
  std::vector<int> studytime_pred;
  std::vector<int> activities_pred;
  int c_1dim__; 
  
 
 public:
  ~model1_fit_model() { }
  
  inline std::string model_name() const final { return "model1_fit_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  model1_fit_model(stan::io::var_context& context__,
                   unsigned int random_seed__ = 0,
                   std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "model1_fit_model_namespace::model1_fit_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 25;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 25;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 25;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 26;
      context__.validate_dims("data initialization","K","int",
           std::vector<size_t>{});
      K = std::numeric_limits<int>::min();
      
      
      current_statement__ = 26;
      K = context__.vals_i("K")[(1 - 1)];
      current_statement__ = 27;
      stan::math::validate_non_negative_index("y", "N", N);
      current_statement__ = 28;
      context__.validate_dims("data initialization","y","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      y = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 28;
      y = context__.vals_i("y");
      current_statement__ = 29;
      stan::math::validate_non_negative_index("age_pred", "N", N);
      current_statement__ = 30;
      context__.validate_dims("data initialization","age_pred","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      age_pred = 
        std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 30;
      age_pred = context__.vals_r("age_pred");
      current_statement__ = 31;
      stan::math::validate_non_negative_index("gender_pred", "N", N);
      current_statement__ = 32;
      context__.validate_dims("data initialization","gender_pred","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      gender_pred = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 32;
      gender_pred = context__.vals_i("gender_pred");
      current_statement__ = 33;
      stan::math::validate_non_negative_index("schoolsup_pred", "N", N);
      current_statement__ = 34;
      context__.validate_dims("data initialization","schoolsup_pred","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      schoolsup_pred = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 34;
      schoolsup_pred = context__.vals_i("schoolsup_pred");
      current_statement__ = 35;
      stan::math::validate_non_negative_index("famsup_pred", "N", N);
      current_statement__ = 36;
      context__.validate_dims("data initialization","famsup_pred","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      famsup_pred = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 36;
      famsup_pred = context__.vals_i("famsup_pred");
      current_statement__ = 37;
      stan::math::validate_non_negative_index("studytime_pred", "N", N);
      current_statement__ = 38;
      context__.validate_dims("data initialization","studytime_pred","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      studytime_pred = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 38;
      studytime_pred = context__.vals_i("studytime_pred");
      current_statement__ = 39;
      stan::math::validate_non_negative_index("activities_pred", "N", N);
      current_statement__ = 40;
      context__.validate_dims("data initialization","activities_pred","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      activities_pred = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 40;
      activities_pred = context__.vals_i("activities_pred");
      current_statement__ = 41;
      c_1dim__ = std::numeric_limits<int>::min();
      
      
      current_statement__ = 41;
      c_1dim__ = (K - 1);
      current_statement__ = 41;
      stan::math::validate_non_negative_index("c", "K - 1", c_1dim__);
      current_statement__ = 42;
      stan::math::validate_non_negative_index("grade", "N", N);
      current_statement__ = 43;
      stan::math::validate_non_negative_index("log_lik", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = c_1dim__ + 1 + 1 + 1 + 1 + 1 + 4;
    
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
    static constexpr const char* function__ = "model1_fit_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      Eigen::Matrix<local_scalar_t__, -1, 1> c =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(c_1dim__,
           DUMMY_VAR__);
      current_statement__ = 1;
      c = in__.template read_constrain_ordered<
            Eigen::Matrix<local_scalar_t__, -1, 1>, jacobian__>(lp__,
            c_1dim__);
      local_scalar_t__ coef_age = DUMMY_VAR__;
      current_statement__ = 2;
      coef_age = in__.template read<local_scalar_t__>();
      local_scalar_t__ coef_gender = DUMMY_VAR__;
      current_statement__ = 3;
      coef_gender = in__.template read<local_scalar_t__>();
      local_scalar_t__ coef_schoolsup = DUMMY_VAR__;
      current_statement__ = 4;
      coef_schoolsup = in__.template read<local_scalar_t__>();
      local_scalar_t__ coef_famsup = DUMMY_VAR__;
      current_statement__ = 5;
      coef_famsup = in__.template read<local_scalar_t__>();
      local_scalar_t__ coef_activity = DUMMY_VAR__;
      current_statement__ = 6;
      coef_activity = in__.template read<local_scalar_t__>();
      Eigen::Matrix<local_scalar_t__, -1, 1> coef_studytime =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(4, DUMMY_VAR__);
      current_statement__ = 7;
      coef_studytime = in__.template read<
                         Eigen::Matrix<local_scalar_t__, -1, 1>>(4);
      {
        current_statement__ = 14;
        lp_accum__.add(stan::math::uniform_lpdf<propto__>(c, -25, 25));
        current_statement__ = 15;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(c, 0, 3));
        current_statement__ = 16;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(coef_age, 0, 1));
        current_statement__ = 17;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(coef_gender, 0, 1));
        current_statement__ = 18;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(coef_schoolsup, 0, 1));
        current_statement__ = 19;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(coef_famsup, 0, 1));
        current_statement__ = 20;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(coef_activity, 0, 1));
        current_statement__ = 21;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(coef_studytime, 0, 1));
        current_statement__ = 24;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 22;
          lp_accum__.add(
            stan::math::ordered_logistic_lpmf<propto__>(
              stan::model::rvalue(y, "y", stan::model::index_uni(n)),
              (((((stan::model::rvalue(coef_studytime, "coef_studytime",
                     stan::model::index_uni(stan::model::rvalue(
                                              studytime_pred,
                                              "studytime_pred",
                                              stan::model::index_uni(n)))) +
                    (coef_age *
                      stan::model::rvalue(age_pred, "age_pred",
                        stan::model::index_uni(n)))) +
                   (coef_gender *
                     stan::model::rvalue(gender_pred, "gender_pred",
                       stan::model::index_uni(n)))) +
                  (coef_schoolsup *
                    stan::model::rvalue(schoolsup_pred, "schoolsup_pred",
                      stan::model::index_uni(n)))) +
                 (coef_famsup *
                   stan::model::rvalue(famsup_pred, "famsup_pred",
                     stan::model::index_uni(n)))) +
                (coef_activity *
                  stan::model::rvalue(activities_pred, "activities_pred",
                    stan::model::index_uni(n)))), c));
        }
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
    static constexpr const char* function__ = "model1_fit_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      Eigen::Matrix<double, -1, 1> c =
         Eigen::Matrix<double, -1, 1>::Constant(c_1dim__,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      c = in__.template read_constrain_ordered<
            Eigen::Matrix<local_scalar_t__, -1, 1>, jacobian__>(lp__,
            c_1dim__);
      double coef_age = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      coef_age = in__.template read<local_scalar_t__>();
      double coef_gender = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      coef_gender = in__.template read<local_scalar_t__>();
      double coef_schoolsup = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      coef_schoolsup = in__.template read<local_scalar_t__>();
      double coef_famsup = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 5;
      coef_famsup = in__.template read<local_scalar_t__>();
      double coef_activity = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 6;
      coef_activity = in__.template read<local_scalar_t__>();
      Eigen::Matrix<double, -1, 1> coef_studytime =
         Eigen::Matrix<double, -1, 1>::Constant(4,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 7;
      coef_studytime = in__.template read<
                         Eigen::Matrix<local_scalar_t__, -1, 1>>(4);
      out__.write(c);
      out__.write(coef_age);
      out__.write(coef_gender);
      out__.write(coef_schoolsup);
      out__.write(coef_famsup);
      out__.write(coef_activity);
      out__.write(coef_studytime);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<double> grade =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      std::vector<double> log_lik =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 13;
      for (int n = 1; n <= N; ++n) {
        current_statement__ = 10;
        stan::model::assign(grade,
          stan::math::ordered_logistic_rng(
            (((((stan::model::rvalue(coef_studytime, "coef_studytime",
                   stan::model::index_uni(stan::model::rvalue(studytime_pred,
                                            "studytime_pred",
                                            stan::model::index_uni(n)))) +
                  (coef_age *
                    stan::model::rvalue(age_pred, "age_pred",
                      stan::model::index_uni(n)))) +
                 (coef_gender *
                   stan::model::rvalue(gender_pred, "gender_pred",
                     stan::model::index_uni(n)))) +
                (coef_schoolsup *
                  stan::model::rvalue(schoolsup_pred, "schoolsup_pred",
                    stan::model::index_uni(n)))) +
               (coef_famsup *
                 stan::model::rvalue(famsup_pred, "famsup_pred",
                   stan::model::index_uni(n)))) +
              (coef_activity *
                stan::model::rvalue(activities_pred, "activities_pred",
                  stan::model::index_uni(n)))), c, base_rng__),
          "assigning variable grade", stan::model::index_uni(n));
        current_statement__ = 11;
        stan::model::assign(log_lik,
          stan::math::ordered_logistic_lpmf<false>(
            stan::model::rvalue(y, "y", stan::model::index_uni(n)),
            (((((stan::model::rvalue(coef_studytime, "coef_studytime",
                   stan::model::index_uni(stan::model::rvalue(studytime_pred,
                                            "studytime_pred",
                                            stan::model::index_uni(n)))) +
                  (coef_age *
                    stan::model::rvalue(age_pred, "age_pred",
                      stan::model::index_uni(n)))) +
                 (coef_gender *
                   stan::model::rvalue(gender_pred, "gender_pred",
                     stan::model::index_uni(n)))) +
                (coef_schoolsup *
                  stan::model::rvalue(schoolsup_pred, "schoolsup_pred",
                    stan::model::index_uni(n)))) +
               (coef_famsup *
                 stan::model::rvalue(famsup_pred, "famsup_pred",
                   stan::model::index_uni(n)))) +
              (coef_activity *
                stan::model::rvalue(activities_pred, "activities_pred",
                  stan::model::index_uni(n)))), c),
          "assigning variable log_lik", stan::model::index_uni(n));
      }
      out__.write(grade);
      out__.write(log_lik);
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
      Eigen::Matrix<local_scalar_t__, -1, 1> c =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(c_1dim__,
           DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= c_1dim__; ++sym1__) {
        stan::model::assign(c, in__.read<local_scalar_t__>(),
          "assigning variable c", stan::model::index_uni(sym1__));
      }
      out__.write_free_ordered(c);
      local_scalar_t__ coef_age = DUMMY_VAR__;
      coef_age = in__.read<local_scalar_t__>();
      out__.write(coef_age);
      local_scalar_t__ coef_gender = DUMMY_VAR__;
      coef_gender = in__.read<local_scalar_t__>();
      out__.write(coef_gender);
      local_scalar_t__ coef_schoolsup = DUMMY_VAR__;
      coef_schoolsup = in__.read<local_scalar_t__>();
      out__.write(coef_schoolsup);
      local_scalar_t__ coef_famsup = DUMMY_VAR__;
      coef_famsup = in__.read<local_scalar_t__>();
      out__.write(coef_famsup);
      local_scalar_t__ coef_activity = DUMMY_VAR__;
      coef_activity = in__.read<local_scalar_t__>();
      out__.write(coef_activity);
      Eigen::Matrix<local_scalar_t__, -1, 1> coef_studytime =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(4, DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
        stan::model::assign(coef_studytime, in__.read<local_scalar_t__>(),
          "assigning variable coef_studytime", stan::model::index_uni(sym1__));
      }
      out__.write(coef_studytime);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"c", "coef_age", "coef_gender",
      "coef_schoolsup", "coef_famsup", "coef_activity", "coef_studytime",
      "grade", "log_lik"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{
                                                                   static_cast<size_t>(c_1dim__)
                                                                   },
      std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{}, std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(4)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= c_1dim__; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "c" + '.' + std::to_string(sym1__));
      } 
    }
    param_names__.emplace_back(std::string() + "coef_age");
    param_names__.emplace_back(std::string() + "coef_gender");
    param_names__.emplace_back(std::string() + "coef_schoolsup");
    param_names__.emplace_back(std::string() + "coef_famsup");
    param_names__.emplace_back(std::string() + "coef_activity");
    for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "coef_studytime" + '.' + std::to_string(sym1__));
      } 
    }
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "grade" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= c_1dim__; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "c" + '.' + std::to_string(sym1__));
      } 
    }
    param_names__.emplace_back(std::string() + "coef_age");
    param_names__.emplace_back(std::string() + "coef_gender");
    param_names__.emplace_back(std::string() + "coef_schoolsup");
    param_names__.emplace_back(std::string() + "coef_famsup");
    param_names__.emplace_back(std::string() + "coef_activity");
    for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "coef_studytime" + '.' + std::to_string(sym1__));
      } 
    }
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "grade" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"c\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(c_1dim__) + "},\"block\":\"parameters\"},{\"name\":\"coef_age\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_gender\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_schoolsup\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_famsup\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_activity\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_studytime\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(4) + "},\"block\":\"parameters\"},{\"name\":\"grade\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"c\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(c_1dim__) + "},\"block\":\"parameters\"},{\"name\":\"coef_age\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_gender\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_schoolsup\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_famsup\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_activity\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"coef_studytime\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(4) + "},\"block\":\"parameters\"},{\"name\":\"grade\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
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
  ((((((c_1dim__ + 1) + 1) + 1) + 1) + 1) + 4);
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (N + N);
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
  ((((((c_1dim__ + 1) + 1) + 1) + 1) + 1) + 4);
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (N + N);
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
     constexpr std::array<const char*, 7> names__{"c", "coef_age",
      "coef_gender", "coef_schoolsup", "coef_famsup", "coef_activity",
      "coef_studytime"};
      const std::array<Eigen::Index, 7> constrain_param_sizes__{c_1dim__, 
       1, 1, 1, 1, 1, 4};
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
using stan_model = model1_fit_model_namespace::model1_fit_model;

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
  return model1_fit_model_namespace::profiles__;
}

#endif


