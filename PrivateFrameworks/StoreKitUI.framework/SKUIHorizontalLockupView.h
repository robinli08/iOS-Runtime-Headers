/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIHorizontalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIMediaPlayerObserver, SKUIOfferViewDelegate, SKUIPerspectiveView, SKUIPreviewContainerView, SKUIToggleButtonDelegate, SKUIViewElementView, UIGestureRecognizerDelegate> {
    NSHashTable * _artworkRelatedChildViewElementViews;
    SKUIBadgeViewElement * _badge;
    NSMapTable * _buyButtonDescriptorToButton;
    NSMapTable * _cacheKeyToImageView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInset;
    UIColor * _gradientColor;
    SUPlayerStatus * _lastPlayerStatus;
    SKUIHorizontalLockupLayout * _layout;
    SKUILockupViewElement * _lockupElement;
    UIView * _metadataBackgroundView;
    SKUIGradientView * _offerConfirmationGradientView;
    NSHashTable * _offerViews;
    SKUIPlayButton * _playButton;
    SKUIPreviewProgressIndicator * _previewProgressIndicator;
    int  _previewState;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSMutableArray * _tappableViews;
    BOOL  _updateLayoutOnButtonConfirmation;
    BOOL  _useClearBackground;
    NSMapTable * _viewElementViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *gradientColor;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *metadataBackgroundView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL updateLayoutOnButtonConfirmation;

+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;
+ (void)_requestLayoutForViewElements:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (BOOL)_usesEditorialLayoutForLabelViewElement:(id)arg1;
+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_addConfirmationGradientForView:(id)arg1;
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;
- (void)_animateButton:(id)arg1;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (id)_columnForView:(id)arg1;
- (float)_dividerHeight:(id)arg1;
- (void)_expandEditorialForLabel:(id)arg1;
- (void)_handlePlayButtonTap:(id)arg1 element:(id)arg2;
- (void)_layoutConfirmationGradientRelativeToItemOfferView:(id)arg1 alpha:(float)arg2;
- (void)_performDefaultActionForImage:(id)arg1;
- (id)_previewFrontView;
- (void)_previewIndicatorAction:(id)arg1;
- (id)_previewMediaURL;
- (id)_previewProgressIndicator;
- (void)_resizeMetadataRelativeToItemOfferView:(id)arg1;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (struct CGSize { float x1; float x2; })_sizeViewsForColumn:(id)arg1 toFitWidth:(float)arg2;
- (void)_tapGestureAction:(id)arg1;
- (BOOL)_usesBackgroundWithAlpha;
- (id)_viewElementForView:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)gradientColor;
- (void)hidePreviewProgressAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2;
- (id)metadataBackgroundView;
- (BOOL)offerViewAnimateTransition:(id)arg1;
- (void)offerViewDidAnimateTransition:(id)arg1;
- (void)offerViewWillAnimateTransition:(id)arg1;
- (id)preferredBackgroundColor;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setContainerBackgroundImageForPlayButton:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGradientColor:(id)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setMetadataBackgroundView:(id)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setSemanticContentAttribute:(int)arg1;
- (void)setUpdateLayoutOnButtonConfirmation:(BOOL)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)toggleButtonDidAnimateTransition:(id)arg1;
- (void)toggleButtonWillAnimateTransition:(id)arg1;
- (void)togglePreviewPlaybackAnimated:(BOOL)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (BOOL)updateLayoutOnButtonConfirmation;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
