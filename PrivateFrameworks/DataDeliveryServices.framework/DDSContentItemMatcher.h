/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
 */

@interface DDSContentItemMatcher : NSObject

+ (bool)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(id /* block */)arg3;
+ (bool)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(bool)arg3;
+ (bool)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(bool)arg3 lenientMatch:(bool)arg4;
+ (bool)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(bool)arg3;
+ (id)assetContentItemsMatching:(id)arg1 contentItems:(id)arg2 parentAsset:(id)arg3;
+ (bool)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1;

@end
