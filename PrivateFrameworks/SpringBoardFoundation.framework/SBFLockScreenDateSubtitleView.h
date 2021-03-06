/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateSubtitleView : UIView <SBFScreenFadeReplicatable> {
    UIView<SBFScreenFadeReplicatable> * _accessoryView;
    SBUILegibilityLabel * _label;
    _UILegibilitySettings * _legibilitySettings;
    NSHashTable * _replicatedViews;
    float  _strength;
}

@property (nonatomic, retain) UIView<SBFScreenFadeReplicatable> *accessoryView;
@property (nonatomic, readonly) float baselineOffsetFromBottom;
@property (nonatomic, readonly) float baselineOffsetFromOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) float strength;
@property (nonatomic, retain) NSString *string;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createReplicateView;
- (void)_enumerateReplicateViews:(id /* block */)arg1;
- (id)_labelFont;
- (id)accessoryView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessoryViewFrame;
- (float)baselineOffsetFromBottom;
- (float)baselineOffsetFromOrigin;
- (id)font;
- (id)init;
- (id)initWithString:(id)arg1 accessoryView:(id)arg2;
- (float)interItemSpacing;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)replicate;
- (void)setAccessoryView:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(float)arg1;
- (void)setString:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)strength;
- (id)string;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtitleLabelFrame;

@end
