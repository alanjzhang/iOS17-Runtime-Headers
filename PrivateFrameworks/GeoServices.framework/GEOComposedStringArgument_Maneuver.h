/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedStringArgument_Maneuver : GEOComposedStringArgument {
    id /* block */  _attributedStringHandler;
    NSString * _fallbackStringValue;
    GEOJunctionInfo * _junctionInfo;
    int  _maneuverType;
}

@property (nonatomic, copy) id /* block */ attributedStringHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributedStringReplacementWithOptions:(id)arg1;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id /* block */)attributedStringHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maneuverFormat;
- (void)setAttributedStringHandler:(id /* block */)arg1;

@end
