#define res_ LL_GPIO_ResetOutputPin
#define set_ LL_GPIO_SetOutputPin
#define tog_ LL_GPIO_TogglePin
#define setEx_ LL_EXTI_EnableIT_0_31
#define IsEnblEx_ LL_EXTI_IsEnabledIT_0_31
#define isinset_(Check) LL_GPIO_IsInputPinSet(Check)
#define isoutset_(Check) LL_GPIO_IsOutputPinSet(Check)

/////////////////////////GPIO////////////////////////////

#define IN1 GPIOA, LL_GPIO_PIN_12
#define IN2 GPIOA, LL_GPIO_PIN_11
#define IN3 GPIOA, LL_GPIO_PIN_10
#define IN4 GPIOA, LL_GPIO_PIN_9

/////////////////////////GPIO////////////////////////////

////////////////////////ARRAYS////////////////////


////////////////////////ARRAYS////////////////////

////////////////////////BUTTONS////////////////////


////////////////////////BUTTONS////////////////////

///////////////////////////TIMERS///////////////////////////

uint32_t delay_1ms_cnt=0;
uint32_t delay_10us_cnt=0;

///////////////////////////TIMERS///////////////////////////

/////////////////////////////VALUE//////////////////////

uint32_t tamtur = 2090;

/////////////////////////////VALUE//////////////////////









