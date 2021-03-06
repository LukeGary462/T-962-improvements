#ifndef REFLOW_H_
#define REFLOW_H_

void Reflow_Init(void);
void Reflow_PlotProfile();
uint16_t Reflow_GetSetpoint(void);
int32_t Reflow_Run(uint32_t thetime, float meastemp, uint8_t* pheat, uint8_t* pfan, int32_t manualsetpoint);

#endif /* REFLOW_H_ */
