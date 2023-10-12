/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImageProcessorKernel : NSObject

+ (unsigned long long)_digestForArgs:(id)arg1;
+ (bool)allowCompressedInputsAndOutputs;
+ (bool)allowPartialOutputRegion;
+ (bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (bool)allowSRGBTranferFuntionOnOutput;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id*)arg4;
+ (bool)canOutputLossyCompressed;
+ (bool)canReduceOutputChannels;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)formatForInputAtIndex:(int)arg1 arguments:(id)arg2;
+ (int)outputFormat;
+ (int)outputFormatWithArguments:(id)arg1;
+ (bool)outputIsOpaque;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)roiTileArrayForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)skipFormatChecks;
+ (bool)synchronizeInputs;

@end
