/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {
    NSArray * _inactiveLines;
    <GEOTransitLine> * _line;
}

@property (nonatomic, readonly) NSArray *inactiveLines;

- (void).cxx_destruct;
- (void)_buildRows;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;
- (id)inactiveLines;
- (id)init;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 line:(id)arg3;

@end