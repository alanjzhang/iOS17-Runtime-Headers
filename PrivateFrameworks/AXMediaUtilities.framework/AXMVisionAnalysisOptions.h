/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding> {
    AXMBrailleEdgeDetectorOptions * _brailleEdgeOptions;
    long long  _clientID;
    bool  _detectAXElements;
    bool  _detectAesthetics;
    bool  _detectBrailleEdges;
    bool  _detectCaptions;
    bool  _detectFaceAttributes;
    bool  _detectFaceExpressions;
    bool  _detectFaceLandmarks;
    bool  _detectFaceNames;
    bool  _detectFacePose;
    bool  _detectFaceRectangles;
    bool  _detectHorizon;
    bool  _detectIconClass;
    bool  _detectModelClassifications;
    bool  _detectNSFW;
    bool  _detectObjects;
    bool  _detectProminentObjects;
    bool  _detectRectangles;
    bool  _detectScenes;
    bool  _detectSignificantEvents;
    bool  _detectText;
    bool  _detectTraits;
    NSData * _equivalenceToken;
    NSArray * _ignoredLayerContextIDs;
    bool  _includeImageInResult;
    NSArray * _includedLayerContextIDs;
    NSLocale * _preferredOutputLocale;
    bool  _preserveInputImageSize;
    NSNumber * _snapshotContextID;
    NSNumber * _snapshotLayerID;
    AXMTextDetectionOptions * _textDetectionOptions;
}

@property (nonatomic, retain) AXMBrailleEdgeDetectorOptions *brailleEdgeOptions;
@property (nonatomic) long long clientID;
@property (nonatomic) bool detectAXElements;
@property (nonatomic) bool detectAesthetics;
@property (nonatomic) bool detectBrailleEdges;
@property (nonatomic) bool detectCaptions;
@property (nonatomic) bool detectFaceAttributes;
@property (nonatomic) bool detectFaceExpressions;
@property (nonatomic) bool detectFaceLandmarks;
@property (nonatomic) bool detectFaceNames;
@property (nonatomic) bool detectFacePose;
@property (nonatomic) bool detectFaceRectangles;
@property (nonatomic, readonly) bool detectFaces;
@property (nonatomic) bool detectHorizon;
@property (nonatomic) bool detectIconClass;
@property (nonatomic) bool detectModelClassifications;
@property (nonatomic) bool detectNSFW;
@property (nonatomic) bool detectObjects;
@property (nonatomic) bool detectProminentObjects;
@property (nonatomic) bool detectRectangles;
@property (nonatomic) bool detectScenes;
@property (nonatomic) bool detectSignificantEvents;
@property (nonatomic) bool detectText;
@property (nonatomic) bool detectTraits;
@property (nonatomic, retain) NSData *equivalenceToken;
@property (nonatomic, readonly) bool hasDetectionsEnabled;
@property (nonatomic, retain) NSArray *ignoredLayerContextIDs;
@property (nonatomic) bool includeImageInResult;
@property (nonatomic, retain) NSArray *includedLayerContextIDs;
@property (nonatomic, retain) NSLocale *preferredOutputLocale;
@property (nonatomic) bool preserveInputImageSize;
@property (nonatomic, retain) NSNumber *snapshotContextID;
@property (nonatomic, retain) NSNumber *snapshotLayerID;
@property (nonatomic, retain) AXMTextDetectionOptions *textDetectionOptions;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;
+ (id)voiceOverOptions;

- (void).cxx_destruct;
- (id)brailleEdgeOptions;
- (long long)clientID;
- (id)description;
- (bool)detectAXElements;
- (bool)detectAesthetics;
- (bool)detectBrailleEdges;
- (bool)detectCaptions;
- (bool)detectFaceAttributes;
- (bool)detectFaceExpressions;
- (bool)detectFaceLandmarks;
- (bool)detectFaceNames;
- (bool)detectFacePose;
- (bool)detectFaceRectangles;
- (bool)detectFaces;
- (bool)detectHorizon;
- (bool)detectIconClass;
- (bool)detectModelClassifications;
- (bool)detectNSFW;
- (bool)detectObjects;
- (bool)detectProminentObjects;
- (bool)detectRectangles;
- (bool)detectScenes;
- (bool)detectSignificantEvents;
- (bool)detectText;
- (bool)detectTraits;
- (void)disableAllDetectors;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalenceToken;
- (bool)hasDetectionsEnabled;
- (id)ignoredLayerContextIDs;
- (bool)includeImageInResult;
- (id)includedLayerContextIDs;
- (id)initWithCoder:(id)arg1;
- (id)preferredOutputLocale;
- (bool)preserveInputImageSize;
- (void)setBrailleEdgeOptions:(id)arg1;
- (void)setClientID:(long long)arg1;
- (void)setDetectAXElements:(bool)arg1;
- (void)setDetectAesthetics:(bool)arg1;
- (void)setDetectBrailleEdges:(bool)arg1;
- (void)setDetectCaptions:(bool)arg1;
- (void)setDetectFaceAttributes:(bool)arg1;
- (void)setDetectFaceExpressions:(bool)arg1;
- (void)setDetectFaceLandmarks:(bool)arg1;
- (void)setDetectFaceNames:(bool)arg1;
- (void)setDetectFacePose:(bool)arg1;
- (void)setDetectFaceRectangles:(bool)arg1;
- (void)setDetectHorizon:(bool)arg1;
- (void)setDetectIconClass:(bool)arg1;
- (void)setDetectModelClassifications:(bool)arg1;
- (void)setDetectNSFW:(bool)arg1;
- (void)setDetectObjects:(bool)arg1;
- (void)setDetectProminentObjects:(bool)arg1;
- (void)setDetectRectangles:(bool)arg1;
- (void)setDetectScenes:(bool)arg1;
- (void)setDetectSignificantEvents:(bool)arg1;
- (void)setDetectText:(bool)arg1;
- (void)setDetectTraits:(bool)arg1;
- (void)setEquivalenceToken:(id)arg1;
- (void)setIgnoredLayerContextIDs:(id)arg1;
- (void)setIncludeImageInResult:(bool)arg1;
- (void)setIncludedLayerContextIDs:(id)arg1;
- (void)setPreferredOutputLocale:(id)arg1;
- (void)setPreserveInputImageSize:(bool)arg1;
- (void)setSnapshotContextID:(id)arg1;
- (void)setSnapshotLayerID:(id)arg1;
- (void)setTextDetectionOptions:(id)arg1;
- (id)snapshotContextID;
- (id)snapshotLayerID;
- (id)textDetectionOptions;

@end
